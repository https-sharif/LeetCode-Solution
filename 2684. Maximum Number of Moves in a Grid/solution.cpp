class Solution {
public:

    int moveForward(vector<vector<int>>& dp, vector<vector<int>>& grid, int r, int c) {
        int n = grid.size();
        int m = grid[0].size();
        if(dp[r][c] != -1) return dp[r][c];
        if(c + 1 >= m) return 0;
        int ans = 0;
        if(r - 1 >= 0 && grid[r - 1][c + 1] > grid[r][c]) ans = max(ans, moveForward(dp, grid, r - 1, c + 1) + 1);
        if(grid[r][c + 1] > grid[r][c]) ans = max(ans, moveForward(dp, grid, r, c + 1) + 1);
        if(r + 1 < n && grid[r + 1][c + 1] > grid[r][c]) ans = max(ans, moveForward(dp, grid, r + 1, c + 1) + 1);
        dp[r][c] = ans;
        return dp[r][c];
    }

    int maxMoves(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        for(int i = 0; i < grid.size(); i++) {
            ans = max(ans, moveForward(dp, grid, i, 0));
        }
        return ans;
    }
};
