class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        auto check = [&](int mid) -> bool {
            int stores = 0;
            for(auto& x : quantities) {
                stores += x / mid;
                if(x % mid != 0) {
                    stores++;
                }
                if(stores > n) return false;
            }
            return stores <= n;
        };

        int l = 1, r = 100000;
        int ans = -1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(check(mid)) {
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        return ans;
    }
};
