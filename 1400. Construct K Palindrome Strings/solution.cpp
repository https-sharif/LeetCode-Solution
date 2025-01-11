class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) return false;

        vector<int> mp(26, 0);
        for(int i = 0; i < s.size(); i++) {
            mp[s[i] - 'a']++;
        }

        int odd = 0;;

        for(auto& x : mp) {
            if(x % 2) {
                odd++;
            }
        }

        return odd <= k;
    }
};
