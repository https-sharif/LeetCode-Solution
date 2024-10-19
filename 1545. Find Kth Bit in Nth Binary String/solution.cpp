class Solution {
public:
    char findKthBit(int n, int k) {
        if(k == 1) return '0';

        int len = (1 << n) - 1;
        int mid = (len + 1) / 2;

        if(k == mid) return '1';
        else if(k < mid){
            return findKthBit(n - 1, k);
        }
        char bit = findKthBit(n - 1, len - k + 1);
        return (bit == '0') ? '1' : '0';
    }
}; 
