class Solution {
public:
    long long dfs(vector<vector<int>>& adj, int idx, int k, bitset<30001>& visited, vector<int>& values, int& ans) {
        visited[idx] = 1;
        long long sum = values[idx];
        for(auto& x : adj[idx]) {
            if(visited[x]) continue;
            sum += dfs(adj, x, k, visited, values, ans);
            sum %= k;
        }

        if(sum % k == 0) {
            ans++;
            return 0;
        }

        return sum;
    }

    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<vector<int>> adj(n);
        bitset<30001> visited = 0;

        for(auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans = 0;
        dfs(adj, 0, k, visited, values, ans);

        return ans;
    }
};
