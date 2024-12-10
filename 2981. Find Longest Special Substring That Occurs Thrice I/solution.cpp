class Solution {
public:
    int maximumLength(string s) {
        int n = s.size();
        int ans = -1;
        int l = 1, r = n;

        while (l <= r) {
            int m = l + ((r - l) >> 1);
            map<string, int> mp;

            for (int i = 0; i <= n - m; i++) {
                string t = s.substr(i, m);
            
                bool valid = true;
                for (int j = 1; j < m; j++) {
                    if (t[j] != t[0]) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    mp[t]++;
                }
            }

            bool found = false;
            for (auto& [x, y] : mp) {
                if (y > 2) {
                    ans = max(ans, m);
                    found = true;
                    break;
                }
            }

            if (found) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return ans;
    }
};
