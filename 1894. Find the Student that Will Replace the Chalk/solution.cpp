class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = chalk.size();
        if(chalk[0] > k) return 0;
        for(int i = 1; i < n; i++){
            chalk[i] += chalk[i-1];
            if(chalk[i] > k){
                return i;
            }
        }
        k = k % chalk[n-1];

        int low = 0, high = n - 1;
        while(low < high){
            int mid = low + (high - low)/2;
            if(chalk[mid] > k){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
