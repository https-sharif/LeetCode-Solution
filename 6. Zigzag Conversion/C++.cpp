class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        int i = 0;
        int d = 1;
        int idx = 0;
        vector<string> part(numRows);
        while(i<s.size()){
            part[idx]+=s[i];
            idx+=d;
            if(idx==numRows-1){
                d = -1;
            }
            else if(idx == 0){
                d = 1;
            }
            i++;
        }
        string ans = "";
        for(auto x:part){
            ans+=x;
        }
        return ans;
    }
};
