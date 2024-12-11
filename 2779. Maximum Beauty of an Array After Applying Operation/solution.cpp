class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int left = 1, right = n;
        int ans = 0;
        while(left <= right) {
            int mid = left + ((right - left) >> 1);
            bool pos = false;
            for(int i = 0; i < n - mid; i++) {
                if(nums[i + mid] - nums[i] <= 2 * k) {
                    ans = max(ans, mid);
                    left = mid + 1;
                    pos = true;
                    break;
                }
            }
            if(!pos) {
                right = mid - 1;
            }
        }

        return ans + 1;
    }
};
