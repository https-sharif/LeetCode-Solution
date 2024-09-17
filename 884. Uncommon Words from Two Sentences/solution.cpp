class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> mp;
        for(int i = 0; i < s1.size(); i++){
            string s = "";
            while(i < s1.size() && s1[i] != ' '){
                s += s1[i];
                i++;
            }
            mp[s]++;
        }
        for(int i = 0; i < s2.size(); i++){
            string s = "";
            while(i < s2.size() && s2[i] != ' '){
                s += s2[i];
                i++;
            }
            mp[s]++;
        }
        vector<string> ans;
        for(auto& [x,y] : mp){
            if(y == 1){
                ans.push_back(x);
            }
        }
        return ans;
    }
};
