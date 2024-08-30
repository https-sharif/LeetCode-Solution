class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end(),greater<int>());
        int n = citations.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(citations[i]>=i+1){
                cnt++;
            }
        }
        return cnt;
    }
};
