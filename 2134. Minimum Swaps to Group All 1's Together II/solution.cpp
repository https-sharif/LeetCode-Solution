class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int numOfOnes = 0;
        for (int num : nums) {
            if(num == 1) numOfOnes++;
        }
        if (numOfOnes == 0 || numOfOnes == n) return 0;
        int left = 0, right = numOfOnes;
        int zero = 0;
        for (int i = left; i <numOfOnes; i++) {
            if(nums[i] == 0){
                zero++;
            }
        }
        int mn = zero;
        while(left<n){
            if(nums[right%n] == 0){
                zero++;
            }
            if(nums[left++] == 0){
                zero--;
            }
            right++;
            mn = min(mn,zero);
        }
        return mn;
    }
};
