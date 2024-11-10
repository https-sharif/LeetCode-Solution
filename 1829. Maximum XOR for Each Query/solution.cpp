class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int x = 0;
        int mx = pow(2, maximumBit) - 1;
        for(auto& num : nums) x ^= num;

        vector<int> ans(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            ans[i] = x ^ mx;
            x ^= nums[nums.size() - i - 1];
        }

        return ans;
    }
};
