class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());

        int n = items.size();
        vector<int> beauty(n);
        vector<int> ans(queries.size());
        
        beauty[0] = items[0][1];
        for (int i = 1; i < n; i++) {
            beauty[i] = max(beauty[i - 1], items[i][1]);
        }

        for(int i = 0; i < queries.size(); i++) {
            vector<int> target = {queries[i], INT_MAX};
            int j = upper_bound(items.begin(), items.end(), target) - items.begin();

            ans[i] = (j > 0) ? beauty[j - 1] : 0;
        }

        return ans;
    }
};
