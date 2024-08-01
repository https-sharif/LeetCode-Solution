class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(auto d : details){
            if( (d[11]-'0')*10 + (d[12]-'0') > 60){
                count++;
            }
        }
        return count;
    }
};
