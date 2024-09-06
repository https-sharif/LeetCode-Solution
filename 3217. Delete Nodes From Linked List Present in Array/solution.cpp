class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        unordered_map<int,bool> mp;
        for(auto& num : nums){
            mp[num] = true;
        }
        
        while(mp[head->val] == true){
            head = head->next;
        }

        ListNode* prev = head;
        ListNode* curr = head->next;

        while(curr != nullptr){
            if(mp[curr->val] == true){
                prev->next = curr->next;
            }
            else{
                prev = prev->next;
            }
            curr = curr->next;
        }

        return head;
    }
};
