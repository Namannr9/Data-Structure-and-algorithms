class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<set<int>> row(9);
        vector<set<int>> col(9);
        vector<set<int>> block(9);
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int num=board[i][j]-'0';
                    int boxIndex=(i/3)*3+j/3;
                    if(row[i].count(num) || col[j].count(num) || block[boxIndex].count(num)) return false;
                    
                    row[i].insert(num);
                    col[j].insert(num);
                    block[boxIndex].insert(num);
                    
                }
            }
        }
        return true;

    }
};