class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strings;
        for(auto& num : nums){
            strings.push_back(to_string(num));
        }
        sort(strings.begin(),strings.end(),[](string& a, string& b){
            return a + b < b + a;
        });
        string s = "";
        for(int i = strings.size() - 1; i >=0; i--){
            s += strings[i];
        }
        int i = 0;
        while(s[i] == '0' && i < s.size() - 1){
            i++;
        }
        return s.substr(i);
    }
};
