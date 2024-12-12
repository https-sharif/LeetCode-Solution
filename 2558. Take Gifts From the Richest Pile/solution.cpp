class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(auto& g : gifts) {
            pq.push(g);
        }

        while(k--) {
            int t = pq.top();
            pq.pop();

            pq.push(sqrt(t));
        }

        long long ans = 0;

        while(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }


        return ans;
    }
};
