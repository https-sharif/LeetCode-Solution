class Solution {
public:
    int nthUglyNumber(int n) {
        int l2 = 0, l3 = 0, l5 = 0;
        vector<int> k(n);
        int value = 1;
        k[0] = 1;
        for (int i = 1; i < n; i++) {
            k[i] = min(k[l2] * 2, min(k[l3] * 3, k[l5] * 5));
            if(k[i] == k[l2]*2) l2++;
            if(k[i] == k[l3]*3) l3++;
            if(k[i] == k[l5]*5) l5++;
        }
        return k[n-1];
    }
};
