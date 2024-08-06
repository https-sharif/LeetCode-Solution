class Solution {
public:
    int minimumPushes(string word) {
        vector<int> map(26,0);
        for(auto c : word){
            map[c-'a']++;
        }
        int x = 0;
        int ans = 0;
        int inc = 1;
        sort(map.begin(),map.end(),greater<int>());
        for(int i = 0;i < 26; i++){
            if(map[i] == 0){
                break;
            }
            if(x>=8){
                x = 0;
                inc++;
            }
            ans+=(inc*map[i]);
            x++;
        }
        return ans;
    }
};
