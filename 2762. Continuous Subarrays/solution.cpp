class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        
        int start = 0;
        multiset<int> window;
        
        for (int end = 0; end < n; ++end) {
            window.insert(nums[end]);
            
            while (*window.rbegin() - *window.begin() > 2) {
                window.erase(window.find(nums[start]));
                start++;
            }
            
            ans += end - start + 1;
        }
        
        return ans;
    }
};
