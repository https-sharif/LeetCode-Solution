class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeroIndex = -1;
        int l = 0;
        int mx = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                if(zeroIndex == -1){
                    zeroIndex = i;
                }
                else{
                    mx = max(mx, i - l -1);
                    l = zeroIndex + 1;
                    zeroIndex = i;
                }
            }
        }
        if(zeroIndex == -1) return nums.size() - 1;
        mx = max(mx, (int)nums.size() - l - 1);
        return mx;
    }
};
