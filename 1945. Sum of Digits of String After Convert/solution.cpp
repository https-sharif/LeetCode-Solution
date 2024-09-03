class Solution {
public:
    int getLucky(string s, int k) {
        string t = ""; 
        for(auto c : s){
            int x = (c - 'a') + 1;
            t +=  to_string(x);
        }

        for(int i = 0; i < k; i++){
            int sum = 0;
            for(auto c : t){
                sum += (c - '0');
            }
            t = to_string(sum);
        }

        return stoi(t);
    }
};
