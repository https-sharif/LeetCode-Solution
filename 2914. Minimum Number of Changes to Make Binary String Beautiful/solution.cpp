class Solution {
public:
    int minChanges(string s) {
        int i = 0;
        int mn = 0;
        int cnt = 0;
        while(i < s.size()){
            int j = i + 1;
            while(j < s.size() && s[i] == s[j]){
                j++;
            }
            if((j - i - mn) % 2 == 1) {
                cnt++;
                mn = 1;
            }
            else{
                mn = 0;
            }
            i = j;
        }

        return cnt + mn;
    }
};
