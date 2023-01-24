class Solution {
public:
    pair<int,int> findCordinate(int val,int n)
    {
        int row = n - (val - 1) / n - 1;
        int col = (val - 1) % n;
        if(row % 2 == n % 2)
        {
            return {row, n - 1 - col};
        }
        
        return {row,col};  
    }
    int snakesAndLadders(vector<vector<int>>& board) 
    {
        int n=board.size();
        int step=0;
        int target=n*n;
        vector<vector<bool>> vis(n,vector<bool>(n,false));
        vis[n-1][0]=true;
        queue<int> q;
        q.push(1);
        while(q.size())
        {
            
            int sz=q.size();
            while(sz--)
            {
                int cur=q.front();
                q.pop();

                if(cur==target) return step;
                for(int i=1;i<=6;i++)
                {
                    if(cur+i > target) break;
                    pair<int,int> p=findCordinate(cur+i,n);
                    int row=p.first;
                    int col=p.second;

                    if(vis[row][col]==false)
                    {
                        vis[row][col]=true;
                        if(board[row][col]==-1) q.push(cur+i);
                        else q.push(board[row][col]);
                    }

                }
            }
            step++;
        }
        
        return -1;
    }
};