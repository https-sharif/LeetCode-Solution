class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> ans;
        int q = queries.size();
        vector<vector<int>> matrix(n);
        vector<int> distance(n, 0);

        for(int i = 0; i < n - 1; i++) {
            matrix[i].push_back(i + 1);
            distance[i + 1] = i + 1;
        }

        for(int i = 0; i < q; i++) {
            int src = queries[i][0], des = queries[i][1];
            matrix[src].push_back(des);

            if(distance[src] + 1 < distance[des]) {
                queue<int> q;
                q.push(des);
                distance[des] = distance[src] + 1;

                while(q.size()) {
                    int idx = q.front();
                    q.pop();

                    for(auto e : matrix[idx]) {
                        if(distance[idx] + 1 < distance[e]) {
                            distance[e] = distance[idx] + 1;
                            q.push(e);
                        }
                    }
                }
            }
            
            ans.push_back(distance[n - 1]);
        }

        return ans;
    }
};
