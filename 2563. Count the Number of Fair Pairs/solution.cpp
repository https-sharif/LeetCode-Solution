class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int l = i + 1, r = n - 1;

            int f = -1, s = -1;
            while(l <= r) {
                int mid = ((l + r) >> 1);
                if(lower <= nums[i] + nums[mid] && nums[i] + nums[mid] <= upper) {
                    f = mid;
                    l = mid + 1;
                }
                else if(lower > nums[i] + nums[mid]) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }
            l = i + 1, r = n - 1;
            while(l <= r) {
                int mid = ((l + r) >> 1);
                if(lower <= nums[i] + nums[mid] && nums[i] + nums[mid] <= upper) {
                    s = mid;
                    r = mid - 1;
                }
                else if(lower > nums[i] + nums[mid]) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }

            if(f != -1) ans += (f - s + 1);
        }

        return ans;
    }
};
