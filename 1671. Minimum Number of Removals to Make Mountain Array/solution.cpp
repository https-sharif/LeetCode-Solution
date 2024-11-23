class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        int ans = n;
        vector<int> a(n), b(n), v;z
        for(int i = 0; i < n; i++) {
            int x = nums[i];
            auto it = lower_bound(v.begin(), v.end(), x);
            a[i] = it - v.begin();
            if(it != v.end()) {
                *it = x;
            }
            else{
                v.push_back(x);
            }
        }
        v.clear();
        for(int i = n - 1; i >= 0; i--) {
            int x = nums[i];
            auto it = lower_bound(v.begin(), v.end(), x);
            b[i] = it - v.begin();
            if(it != v.end()) {
                *it = x;
            }
            else{
                v.push_back(x);
            }
        }

        for(int i = 0; i < n; i++) {
            if(a[i] && b[i]) ans = min(ans, n - a[i] - b[i] - 1);
        }
        return ans;
    }
};
