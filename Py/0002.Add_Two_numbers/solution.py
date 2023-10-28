class Solution:

    
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        carry = 0
        head = curr = ListNode()
        
        while l1 and l2:
            total = l1.val + l2.val + carry
            curr.next = ListNode(total% 10)
            carry = total // 10
            l1,l2,curr = l1.next, l2.next,curr.next
            
        while l1:
            total = l1.val + carry
            curr.next = ListNode(total%10)
            carry = total // 10
            l1, curr = l1.next, curr.next
            
        while l2:
            total = l2.val + carry
            curr.next = ListNode(total%10)
            carry = total//10
            l2, curr = l2.next, curr.next
        if carry > 0:
            curr.next  = ListNode(carry)
                
        return head.next
        
        