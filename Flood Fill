class Solution {
public:
      vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int prevColor=image[sr][sc];
        dfs(sr,sc,image,prevColor,newColor);
        return image;
    }
    void dfs(int row , int col ,vector<vector<int>>& image,int prevColor , int newColor ){
        if(row<0 || col<0 || row>=image.size() || col>=image[0].size() || image[row][col]!=prevColor || image[row][col]==newColor)
            return ; 
        image[row][col]=newColor;
        dfs(row-1,col,image,prevColor,newColor);
         dfs(row+1,col,image,prevColor,newColor);
         dfs(row,col-1,image,prevColor,newColor);
         dfs(row,col+1,image,prevColor,newColor);
    }

};
