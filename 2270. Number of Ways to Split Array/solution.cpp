class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> suffix(n, 0);
        suffix[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + nums[i];
        }
        int cnt = 0;
        long long sum = 0;
        for(int i = 0; i < n - 1; i++) {
            sum += nums[i];
            if(sum >= suffix[i + 1]) cnt++;
        }
        return cnt;
    }
};
