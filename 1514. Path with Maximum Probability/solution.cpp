class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int,double>>> adjList(n);
        for(int i = 0; i < edges.size(); i++){
            int a = edges[i][0];
            int b = edges[i][1];
            adjList[a].push_back({b,succProb[i]});
            adjList[b].push_back({a,succProb[i]});
        }

        priority_queue<pair<double,int>> q;
        vector<bool> seen(n,false);

        q.push({(double)1.00,start_node});

        vector<double> maxProb(n,(double)0.0);
        while(!q.empty()){
            auto [prob, node] = q.top();
            q.pop();
            if(!seen[node]){
                seen[node] = true;
                for(auto& [d,p] : adjList[node]){
                    if(prob * p > maxProb[d]){
                        maxProb[d] = prob * p;
                        q.push({maxProb[d],d});
                    }
                }
            }
        }
        return maxProb[end_node];
    }
};
