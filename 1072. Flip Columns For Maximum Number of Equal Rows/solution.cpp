class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        auto comp = [](const bitset<300>& a, const bitset<300>& b) {
            return a.to_string() < b.to_string();
        };

        map<bitset<300>, int, decltype(comp)> mp;

        for(int i = 0; i < n; i++) {
            int temp = matrix[i][0];
            bitset<300> pattern;
            for(int j = 0; j < m; j++) {
                pattern[j] = matrix[i][j] ^ temp;
            }

            mp[pattern]++;
        }

        int ans = 0;
        for(auto& [_, val] : mp) {
            ans = max(ans, val);
        }

        return ans;
    }
};
