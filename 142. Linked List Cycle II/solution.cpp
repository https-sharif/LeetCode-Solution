class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, bool> mp;
        ListNode* slow = head;
        while(slow != nullptr && mp.find(slow) == mp.end()){
            mp[slow] = true;
            slow = slow -> next;
        }
        if(slow == nullptr){
            return nullptr;
        }
        return slow;
    }
};
