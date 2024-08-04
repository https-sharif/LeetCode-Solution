class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int mod = 1e9 + 7;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum = (sum + nums[j])%mod;
                pq.push(-sum);
            }
        }
        int ans = 0;
        int numofelement = 1;
        while(!pq.empty()){
            if(numofelement >= left && numofelement <= right){
                ans = (ans - pq.top())%mod;
            }
            pq.pop();
            numofelement++;
        }
        return ans;
    }
};
