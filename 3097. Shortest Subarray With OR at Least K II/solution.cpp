class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        if (k == 0) return 1;

        int l = 0;
        int n = nums.size();
        int mn = INT_MAX;
        vector<int> bits(32, 0);

        for (int i = 0; i < n; i++) {
            int temp = nums[i];
            for (int j = 0; j < 32; j++) {
                bits[j] += ((temp >> j) & 1);
            }

            int x = 0;
            for (int j = 0; j < 32; j++) {
                if (bits[j] > 0) {
                    x |= (1 << j);
                }
            }

            while (x >= k && l <= i) {
                mn = min(mn, i - l + 1);
                for (int j = 0; j < 32; j++) {
                    bits[j] -= ((nums[l] >> j) & 1);
                }

                x = 0;
                for (int j = 0; j < 32; j++) {
                    if (bits[j] > 0) {
                        x |= (1 << j);
                    }
                }
                l++;
            }
        }

        return (mn == INT_MAX) ? -1 : mn;
    }
};
