class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        int one = 0;

        for(int i = 0; i < n; i++) {
            one += derived[i];
        }
        
        return (one & 1) == 0;
    }
};
