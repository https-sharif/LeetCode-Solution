class Solution {
public:
    int dfs(vector<vector<int>>& stones, vector<bool>& visited, int idx){
        visited[idx] = true;
        int result = 0;
        for(int i = 0; i < stones.size(); i++){
            if(!visited[i] && (stones[i][0] == stones[idx][0] || stones[i][1] == stones[idx][1])){
                result += dfs(stones,visited,i) + 1;
            }
        }
        return result;

    }

    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<bool> visited(n,false);
        int result = 0;
        for(int i = 0; i < n; i++){
            if(visited[i]) continue;
            result += dfs(stones,visited,i);
        }

        return result;
    }
};
