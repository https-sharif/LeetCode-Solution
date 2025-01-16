class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();

        int xor1 = 0, xor2 = 0;
        if(m & 1) {
            for(int i = 0; i < n; i++) {
                xor1 ^= nums1[i];
            }
        }

        if(n & 1) {
            for(int i = 0; i < m; i++) {
                xor2 ^= nums2[i];
            }
        }

        return xor1 ^ xor2;
    }
};
