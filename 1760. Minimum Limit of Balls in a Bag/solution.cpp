class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size();
        int l = 1, r = *max_element(nums.begin(), nums.end());

        while(l < r) {
            int mid = l + ((r - l) >> 1);
            long long cnt = 0;
            for(int j = 0; j < n; j++) {
                cnt += (nums[j] - 1) / mid;
            }

            if(cnt <= maxOperations) {
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }

        return r;
    }
};
