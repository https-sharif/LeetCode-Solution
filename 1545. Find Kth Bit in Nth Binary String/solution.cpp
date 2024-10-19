class Solution {
public:
    string createString(string s){
        string t = "1";
        for(int i = s.size() - 1; i >= 0; i++) {
            if(s[i] == '0'){
                t += '1';
            }
            else{
                t += '0';
            }
        }
        return s + t;
    }

    char findKthBit(int n, int k) {
        string s = "0";
        for(int i = 0; i < n; i++){
            s = createString(s);
        }

        return s[k - 1];
    }
};
