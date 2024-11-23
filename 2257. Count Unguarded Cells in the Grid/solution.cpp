class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 1));
        for(auto& v : walls){
            grid[v[0]][v[1]] = -1;
        }

        for(auto& v : guards) {
            grid[v[0]][v[1]] = -2;
        }

        for(auto& v : guards) {
            int x = v[0];
            int y = v[1];
            for(int i = x + 1; i < m; i++) {
                if(grid[i][y] < 0) {
                    break;
                }
                grid[i][y] = 0;
            }
            for(int i = x - 1; i >= 0; i--) {
                if(grid[i][y] < 0) {
                    break;
                }
                grid[i][y] = 0;
            }
            for(int i = y + 1; i < n; i++) {
                if(grid[x][i] < 0) {
                    break;
                }
                grid[x][i] = 0;
            }
            for(int i = y - 1; i >= 0; i--) {
                if(grid[x][i] < 0) {
                    break;
                }
                grid[x][i] = 0;
            }
        }

        int ans = 0;
        for(auto& v : grid) {
            for(auto& x : v) {
                if(x == 1) ans++;
            }
        }
        return ans;
    }
};
