class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for (auto a : arr) {
            mp[a]++;
        }
        int c = 1;
        for(int i = 0; i < arr.size(); i++) {
            if(mp[arr[i]] == 1){
                if(c == k) {
                    return arr[i];
                }
                else{
                    c++;
                }
            }
        }
        return "";
    }
};
