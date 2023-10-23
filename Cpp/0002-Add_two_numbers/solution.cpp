class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = new ListNode(0);  // Dummy node to simplify code
        ListNode* curr = head;

        while (l1 || l2) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;

            int total = val1 + val2 + carry;
            curr->next = new ListNode(total % 10);
            carry = total / 10;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
            curr = curr->next;
        }

        if (carry > 0) {
            curr->next = new ListNode(carry);
        }

        return head->next;  // Skip the dummy node
    }
};
