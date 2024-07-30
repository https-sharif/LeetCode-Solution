class Solution {
public:
    int minimumDeletions(string s) {
        int ans = 0;
        int bcount = 0;
        for (int i = 0; i < s.size(); i++) {
            if(s[i]=='b'){
                bcount++;
            }
            else{
                ans = min(ans+1,bcount);
            }
        }
        return ans;
    }
};
