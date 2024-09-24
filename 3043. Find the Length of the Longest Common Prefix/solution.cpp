class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        set<string> st;
        for(int i = 0; i < arr1.size(); i++){
            while(arr1[i]){
                st.insert(to_string(arr1[i]));
                arr1[i] = arr1[i] / 10;
            }
        }

        int m = 0;

        for(int i = 0; i < arr2.size(); i++){
            while(arr2[i]){
                string s = to_string(arr2[i]);
                if(st.find(s) != st.end()){
                    m = max(m, (int)s.size());
                    break;
                }
                arr2[i] = arr2[i] / 10;
            }
        }
        
        return m;
    }
};
