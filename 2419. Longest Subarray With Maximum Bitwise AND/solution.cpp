class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx = 0;
        for(int i = 0; i < nums.size(); i++){
            mx = max(mx, nums[i]);
        }

        int size = 0;
        int mxsize = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == mx){
                size++;
            }
            else{
                mxsize = max(mxsize,size);
                size = 0;
            }
        }
        mxsize = max(mxsize,size);
        return mxsize;
    }
};
