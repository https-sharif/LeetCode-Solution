class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<vector<int>> ans(m, vector<int>(n,-1));
        int up = 0, down = m - 1, left = 0, right = n - 1;
        ListNode* start = head;
        while(start != nullptr){
            for(int i = left; i <= right ; i++){
                if(start == nullptr) return ans;
                ans[up][i] = start->val;
                start = start->next;
            }
            up++;
            for(int i = up; i <= down; i++){
                if(start == nullptr) return ans;
                ans[i][right] = start->val;
                start = start->next;
            }
            right--;
            for(int i = right; i >= left; i--){
                if(start == nullptr) return ans;
                ans[down][i] = start->val;
                start = start->next;
            }
            down--;
            for(int i = down; i >= up; i--){
                if(start == nullptr) return ans;
                ans[i][left] = start->val;
                start = start->next;
            }
            left++;
        }
        return ans;
    }
};
