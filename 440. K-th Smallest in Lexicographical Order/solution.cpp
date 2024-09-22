class Solution {
public:
    int findKthNumber(int n, int k) {
        int curr = 1;
        k--;
      
        while(k){
            long long count = 0;
            for(long long f = curr, l = curr + 1; f <= n; f *= 10, l *= 10){
                count += min(n + 1LL, l) - f;
            }
            if(k >= count){
                curr++;
                k -= count;
            }
            else{
                curr *= 10;
                k--;
            }
        }

        return curr;
    }
};
