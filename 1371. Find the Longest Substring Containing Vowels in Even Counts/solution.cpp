class Solution {
public:
    int remap(char c){
        switch(c){
            case 'a':
                return 1;
            case 'e':
                return 2;
            case 'i':
                return 4;
            case 'o':
                return 8;
            case 'u':
                return 16;
        }
        return 0;
    }
    int findTheLongestSubstring(string s) {
        int n = s.size();
        vector<int> map(32,-2);
        int mask = 0;
        map[0] = -1;
        int mx = 0;
        for(int i = 0; i < n; i++){
            int x = remap(s[i]);
            mask ^= x;

            int p = map[mask];
            if(p != -2){
                mx = max(mx, i - p);
            }
            else{
                map[mask] = i;
            }
        }
        return mx;
    }
};
