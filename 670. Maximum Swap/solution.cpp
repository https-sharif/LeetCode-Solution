class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        for (int i = 0; i < s.size(); i++) {
            int idx = -1;
            char mx = '0';
            for (int j = i + 1; j < s.size(); j++) {
                if(s[j] >= mx){
                    idx = j;
                    mx = s[j];
                }
            }
            if (s[i] < mx) {
                char temp = s[i];
                s[i] = s[idx];
                s[idx] = temp;
                return stoi(s);
            }
        }
        return num;
    }
};
