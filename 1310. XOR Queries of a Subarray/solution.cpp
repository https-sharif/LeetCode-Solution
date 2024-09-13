class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        for(int i = 1; i < n; i++){
            arr[i] ^= arr[i-1];
        }

        vector<int> ans;

        for(auto& query : queries){
            int x = query[0];
            int y = query[1];
            if(x == 0){
                ans.push_back(arr[y]);
            }
            else{
                ans.push_back(arr[y] ^ arr[x - 1]);
            }
        }

        return ans;
    }
};
