class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int x,int y,char val){
        for (int i=0;i<9;i++){
            if (board[i][y]==val && i!=x){
                return false;
            }
        }
        for (int i=0;i<9;i++){
            if (board[x][i]==val && i!=y){
                return false;
            }
        }
        int x1=(x/3)*3;
        int y1=(y/3)*3;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                if (board[x1+i][y1+j]==val && (x1+i)!=x && (y1+j)!=y){
                    return false;
                }
            }
        }
        return true;
    }
    bool sudo(vector<vector<char>>& board){
        for (int i=0;i<9;i++){
            for (int j=0;j<9;j++){
                if (board[i][j]=='.'){
                    continue;
                }
                else{
                    if (isSafe(board,i,j,board[i][j])){
                        continue;
                    }
                    else{
                        return false;
                    }
               }    
          }    
      }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        return sudo(board);
    }
};
