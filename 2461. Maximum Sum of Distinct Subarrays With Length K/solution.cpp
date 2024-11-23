class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> last;
        long long mx = 0, curr = 0;
        int ds = 0;

        for (int i = 0; i < n; i++) {
            curr += nums[i];
            if (++last[nums[i]] == 1) {
                ds++;
            }
        
            if (i >= k) {
                curr -= nums[i - k];
                if (--last[nums[i - k]] == 0) {
                    ds--;
                    last.erase(nums[i - k]);
                }
            }

            if (i >= k - 1 && ds == k) {
                mx = max(mx, curr);
            }
        }

        return mx;
    }
};
