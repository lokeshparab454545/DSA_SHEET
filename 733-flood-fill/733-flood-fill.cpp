class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>&image, vector<vector<int>>&ans, int color, int iniColor, int delRow[], int delCol[]){
        int n = image.size();
        int m = image[0].size();
        ans[i][j] = color;
        for(int k=0; k<4; k++){
            int newR = i + delRow[k];
            int newC = j + delCol[k];
            if(newR >= 0 && newR < n && newC >= 0 && newC < m && image[newR][newC] == iniColor && ans[newR][newC] != color){
                dfs(newR, newC, image, ans, color, iniColor, delRow, delCol);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans = image;
        int iniColor = image[sr][sc];
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, -1, 0, 1};
        dfs(sr, sc, image, ans, color, iniColor, delRow, delCol);
        return ans;
    }
};