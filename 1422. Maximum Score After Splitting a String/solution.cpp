class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        vector<int> one(n, 0);
        one[n - 1] = s[n - 1] - '0';
        for(int i = n - 2; i >= 0; i--) {
            one[i] = one[i + 1] + s[i] - '0';
        }
        int ans = 0;
        int cnt = 0;
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == '0') {
                cnt++;
            }
            ans = max(ans, cnt + one[i + 1]);
        }
        return ans;
    }
};
