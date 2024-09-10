class Solution {
public:
    int gcd(int a, int b){
        return (b == 0 ? a : gcd(b, a % b));
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* first = head, *second = head->next;
        while(second != nullptr){
            int v = gcd(first->val,second->val);
            ListNode* temp = new ListNode(v,second);
            first->next = temp;
            first = second;
            second = second->next;
        }
        
        return head;
    }
};
