class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head is None or head.next is None:
            return head

        # Create a dummy node to simplify edge cases
        dummy = ListNode()
        dummy.next = head

        current = dummy
        next_group_start = dummy
        previous_group_end = dummy
        count = 0

        # Count the number of nodes in the list
        while current.next:
            count += 1
            current = current.next

        # Reverse groups of k nodes
        while count >= k:
            current = previous_group_end.next
            next_group_start = current.next
            
            # Reverse k nodes in the group
            for i in range(1, k):
                current.next = next_group_start.next
                next_group_start.next = previous_group_end.next
                previous_group_end.next = next_group_start
                next_group_start = current.next

            # Update the previous group's end to the current group's end
            previous_group_end = current
            count -= k

        # Return the head of the modified list
        return dummy.next