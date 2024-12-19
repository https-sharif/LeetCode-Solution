class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int right = -1;
        int ans = 0;
        for(int i = 0; i < arr.size(); i++) {
            right = max(right, arr[i] + 1);
            if(i + 1 == right) {
                ans++;
            }
        }
        return ans;
    }
};
