class Solution {
public:
    long long minEnd(long long n, long long x) {
        n--;
        long long bit = 1;
        long long pos = 0;
        while(n) {
            if((x & bit) == 0) {
                x |= (((n & 1) << pos));
                n >>= 1;
            }
            bit <<= 1;
            pos++;
        }
        return x;
    }
};
