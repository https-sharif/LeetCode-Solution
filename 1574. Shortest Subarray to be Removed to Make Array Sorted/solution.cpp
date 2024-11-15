class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r =  n - 1;

        while(l < n - 1 && arr[l] <= arr[l + 1]) l++;
        while(r > l && arr[r] >= arr[r - 1]) r--;

        if(l == n - 1) return 0;

        int ans = min(r, n - l - 1);

        for(int i = 0, j = r; i <= l && j < n; ) {
            if(arr[i] <= arr[j]) {
                ans = min(ans, j - i - 1);
                i++;
            }
            else {
                j++;
            }
        }

        return ans;
    }
};
