class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        current = head
        nextnode = None
        previous = None
        while current is not None:
            nextnode = current.next
            current.next = previous
            previous = current
            current = nextnode
        return previous