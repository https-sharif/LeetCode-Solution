class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> rank;
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        
        int i = 1;
        for(auto& a : sorted){
            if(rank.find(a) == rank.end()){
                rank[a] = i++;
            }
        }

        for(auto& a : arr){
            a = rank[a];
        }
        return arr;
    }
};
