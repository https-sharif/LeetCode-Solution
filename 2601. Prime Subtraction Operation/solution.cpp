class Solution {
public:
    bool isPrime(int x) {
        if (x <= 1) return false;
        if (x <= 3) return true;
        if (x % 2 == 0 || x % 3 == 0) return false;
        for (int i = 5; i * i <= x; i += 6) {
            if (x % i == 0 || x % (i + 2) == 0) return false;
        }
        return true;
    }

    int nextPrime(int x) {
        while (!isPrime(x)) {
            x++;
        }
        return x;
    }
    
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        int lm = nums[n - 1];
                
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] >= lm) {
                int diff = nums[i] - lm;
                diff = nextPrime(diff + 1);  
                lm = nums[i] - diff;
            } else {
                lm = nums[i];
            }
        }
        return lm > 0;  
    }
};
