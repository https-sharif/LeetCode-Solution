class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto e: edges){
            adj[e[0]].push_back({e[1],e[2]});
            adj[e[1]].push_back({e[0],e[2]});
        }
        auto dfs = [&](int source) -> int {
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> queue;
            queue.emplace(0, source);
            set<int> visited;

            while (!queue.empty()) {
                auto [distance_to_this_node, cur_node] = queue.top();
                queue.pop();
                if (!visited.count(cur_node)) {
                    visited.insert(cur_node);
                    for (const auto& [neighbor, distance] : adj[cur_node]) {
                        int distance_from_source = distance_to_this_node + distance;
                        if (distance_from_source <= distanceThreshold) {
                            queue.emplace(distance_from_source, neighbor);
                        }
                    }
                }
            }
            return visited.size() - 1;
        };
        int idx = -1;
        int mx = 99999;
        for(int i = 0;i<n;i++){
            int res = dfs(i);
            if(res<=mx){
                mx = res;
                idx = i;
            }
        }
        return idx;
    }
};
