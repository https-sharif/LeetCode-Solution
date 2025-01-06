class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> left(n, 0), right(n, 0);
        int balls = 0, cost = 0;
        for(int i = 0; i < n; i++) {
            cost += balls;
            left[i] = cost;
            balls += boxes[i] - '0';
        }
        balls = 0, cost = 0;
        for(int i = n - 1; i >= 0; i--) {
            cost += balls;
            right[i] = cost;
            balls += boxes[i] - '0';
        }

        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++) {
            ans[i] = left[i] + right[i];
        }

        return ans;
    }
};
