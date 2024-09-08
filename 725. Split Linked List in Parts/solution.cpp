class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k);
        int n = 0;
        ListNode* start = head;
        while(start != nullptr){
            n++;
            start = start->next;
        }
        int eachSize = n / k;
        int extra = n % k;
        int idx = 0;
        start = head;
        ListNode* prev = nullptr;

        for(int i = 0; start != nullptr && i < k; i++, extra--){
            ans[i] = start;
            for(int j = 0; j < eachSize + (extra > 0 ? 1 : 0); j++){
                prev = start;
                start = start->next;
            }
            prev->next = nullptr;
        }
        return ans;
    }
};
