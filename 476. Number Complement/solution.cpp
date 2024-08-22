class Solution {
public:
    int findComplement(int num) {
        int d = 0;
        int ans = 0;
        while(num){
            if(num%2==0){
                ans += 1<<d;
            }
            d++;
            num = num>>1;
        }
        return ans;
    }
};
