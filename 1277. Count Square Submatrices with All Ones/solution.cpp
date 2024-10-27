class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> sq(n, vector<int>(m, 0));
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 1) {
                    if (i == 0 || j == 0) {
                        sq[i][j] = 1;
                    } else {
                        sq[i][j] = min({sq[i-1][j], sq[i][j-1], sq[i-1][j-1]}) + 1;
                    }
                    ans += sq[i][j];
                }
            }
        }
        return ans;
    }
};
