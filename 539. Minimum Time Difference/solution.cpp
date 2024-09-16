class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int mn = INT_MAX;
        sort(timePoints.begin(),timePoints.end());
        int n = timePoints.size();
        for(int i = 0; i < n - 1; i++){
            int h1 = timePoints[i][0] * 10 + timePoints[i][1];
            int h2 = timePoints[i + 1][0] * 10 + timePoints[i + 1][1];
            int m1 = timePoints[i][3] * 10 + timePoints[i][4];
            int m2 = timePoints[i + 1][3] * 10 + timePoints[i + 1][4];
            int diff = (h1 == h2) ? m2 - m1 : (h2 - h1 - 1) * 60 + (60 - m1) + m2;
            mn = min(mn,diff);
        }

        int h1 = timePoints[0][0] * 10 + timePoints[0][1];
        int h2 = timePoints[n - 1][0] * 10 + timePoints[n - 1][1];
        int m1 = timePoints[0][3] * 10 + timePoints[0][4];
        int m2 = timePoints[n - 1][3] * 10 + timePoints[n - 1][4];
        int diff = 1440 - (h2 * 60 + m2) + h1 * 60 + m1;
        mn = min(mn,diff);

        return mn;
    }
};
