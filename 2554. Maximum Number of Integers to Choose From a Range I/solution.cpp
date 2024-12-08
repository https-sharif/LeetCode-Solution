class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> b(banned.begin(), banned.end());
        long long sum = 0;
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(sum + i > maxSum) break;
            if(b.find(i) == b.end()) {
                sum += i;
                cnt++;
            }
        }

        return cnt;
    }
};
