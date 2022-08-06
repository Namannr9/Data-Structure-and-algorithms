class Solution {
public:
    void solve(int i,int j,int n,int m,vector<vector<char>> &board)
    {
        if(i<0 || i>=n || j<0 || j>=m || board[i][j]!='O') return;
        board[i][j]='#';
        solve(i-1,j,n,m,board);  // up
        solve(i+1,j,n,m,board);  // down
        solve(i,j-1,n,m,board);  // left
        solve(i,j+1,n,m,board);  // right
    }
    void solve(vector<vector<char>>& board) 
    {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // if it is boundary mark it and its adjacent which are connected directly
                if((i==0 || i==n-1 || j==0 || j==m-1) && board[i][j]=='O') solve(i,j,n,m,board);  
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O') board[i][j]='X';
                else if(board[i][j]=='#') board[i][j]='O';
            }
        }
    }
};