class Solution {
public:
    int countK(vector<int>& nums,int mid){
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int j = i + 1;
            while (j < n && nums[j] - nums[i] <= mid) {
                j++;
            }
            count += (j - i - 1);
        }
        return count;
    }

    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums[n-1] - nums[0];
        while(left<right){
            int mid = left + (right - left)/2;
            int count = countK(nums,mid);
            if(count >= k){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};
