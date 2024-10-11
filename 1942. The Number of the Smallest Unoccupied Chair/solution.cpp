class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        vector<pair<int, int>> arrival;
        for (int i = 0; i < n; i++) {
            int arrivalTime = times[i][0];
            arrival.push_back({arrivalTime, i});
        }
        sort(arrival.begin(), arrival.end());

        priority_queue<int, vector<int>, greater<int>> available;
        for (int i = 0; i < n; i++) {
            available.push(i);
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> leaving;

        for (auto& [x, y] : arrival) {
            while (!leaving.empty() && leaving.top().first <= x) {
                available.push(leaving.top().second);
                leaving.pop();
            }

            int chair = available.top();
            available.pop();
            if (y == targetFriend) return chair;

            leaving.push({times[y][1], chair});
        }

        return 0;
    }
};
