class Solution {
public:
    /*
    In this question , instead of using visited array we done changes in existing board
    we add + 100 so that , ascii value get changed and not matched with any character
    */
    
    bool solve(int i,int j,int r,int c,int cur,string word,vector<vector<char>> &board)
    {
        if(cur>=word.size()) return true;
        if(i<0 || j<0 || i>=r || j>=c || board[i][j]!=word[cur]) return false;
        
        bool exist=false;
        
        if(board[i][j]==word[cur])
        {
            board[i][j]+=100; // mark as visited
            
            exist=solve(i-1,j,r,c,cur+1,word,board) ||  //up
                solve(i+1,j,r,c,cur+1,word,board)   ||  //down
                solve(i,j-1,r,c,cur+1,word,board)   ||  //left
                solve(i,j+1,r,c,cur+1,word,board);      //right
            board[i][j]-=100; // marking not visited
        }
        return exist;
        
        
    }
    
    bool exist(vector<vector<char>>& board, string word) 
    {
        int r=board.size();
        int c=board[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                
                if(solve(i,j,r,c,0,word,board)) return true;
            }
        }
        return false;
    }
};