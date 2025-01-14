class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int, bool> mp1, mp2;
        int n = A.size();
        int cnt = 0;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(A[i] == B[i]) {
                cnt++;
                ans.push_back(cnt);
                continue;
            }
            if(mp1.find(B[i]) != mp1.end()) {
                cnt++;
            }
            if(mp2.find(A[i]) != mp2.end()) {
                cnt++;
            }
            mp1[A[i]] = true;
            mp2[B[i]] = true;
            ans.push_back(cnt);
        }
        return ans;
    }
};
