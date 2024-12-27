class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        if (n <= 2) return values[0] + values[1] + 0 - 1;
        vector<int> sufix(n);
        sufix[n - 1] = values[n - 1] - (n - 1);
        for (int i = n - 2; i >= 0; i--) {
            sufix[i] = max(sufix[i + 1], values[i] - i);
        }
        int maxScore = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            maxScore = max(maxScore, values[i] + i + sufix[i + 1]);
        }

        return maxScore;
    }
};
