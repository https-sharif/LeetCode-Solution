class Solution {
public:
    int findAns(int n){
        int d = 0;
        while(n % 2 == 0){
            n/=2;
            d += 2;
        }
        int div = 3;
        while(n != 1){
            if(n % div == 0){
                d += div;
                n /= div;
            }
            else{
                div += 2;
            }
        }
        return d;
    }
    int minSteps(int n) {
        if(n == 1) return 0;
        int ans = findAns(n);
        return ans;
    }
};
