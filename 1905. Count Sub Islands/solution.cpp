class Solution {
public:

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size();
        int m = grid1[0].size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid2[i][j] == 1){
                    int result = 1;
                    dfs(grid1,grid2,i,j,result);
                    ans += result;
                }
            }
        }
        return ans;
    }

    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, int &result){
        int n = grid1.size();
        int m = grid1[0].size();
        if(i < 0 || j < 0 || i >= n || j >= m || grid2[i][j] == 0){
            return;
        }
        if(grid1[i][j] == 0 && grid2[i][j] == 1){
            result = 0;
            return;
        }

        grid2[i][j] = 0;

        dfs(grid1,grid2,i+1,j,result);
        dfs(grid1,grid2,i,j+1,result);
        dfs(grid1,grid2,i-1,j,result);
        dfs(grid1,grid2,i,j-1,result);
    }
};
