class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c = 0;
        while(start || goal){
            c += (start & 1) ^ (goal & 1);
            start >>= 1;
            goal >>= 1;
        }
        return c;
    }
};
