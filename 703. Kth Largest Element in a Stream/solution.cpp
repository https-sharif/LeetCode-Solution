class KthLargest {
public:
    priority_queue<int> pq;
    int s;
    KthLargest(int k, vector<int>& nums) {
        s = k;
        for(auto num : nums){
            pq.push(-num);
            if(pq.size() > k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(-val);
        if(pq.size() > s) pq.pop();
        return -pq.top();
    }
};
