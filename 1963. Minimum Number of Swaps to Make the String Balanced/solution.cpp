class Solution {
public:
    int minSwaps(string s) {
        int mismatch = 0;
        for(auto& c : s) {
            if(c == '[') {
                mismatch++;
            }
            else {
                if(mismatch == 0){
                    mismatch++;
                }
                else{
                    mismatch--;
                }
            }
        }
        return (mismatch + 1) / 2;
    }
};
