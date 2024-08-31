class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int mx = 0;
        int l = 0;
        int numOfZero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                numOfZero++;
            }
            if(numOfZero > k){
                mx = max(mx, i - l);
                while(numOfZero > k){
                    if(nums[l++] == 0){
                        numOfZero--;
                    }
                }
            }
        }
        mx = max((int)(nums.size()-l), mx);
        return mx;
    }
};
