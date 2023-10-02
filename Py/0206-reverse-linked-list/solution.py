class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # Initialize three pointers: current, nextnode, and previous.
        # Current points to the current node being processed.
        # Nextnode points to the next node in the original list.
        # Previous will store the reversed part of the list.
        current = head
        nextnode = None
        previous = None

        # Traverse the original list.
        while current is not None:
            # Store the next node in the original list in nextnode.
            nextnode = current.next

            # Reverse the direction of the current node's next pointer
            # to point it to the previous node (reversal step).
            current.next = previous

            # Move previous and current pointers one step forward.
            previous = current
            current = nextnode

        # At the end of the loop, previous will be pointing to the new head
        # of the reversed list, so return it.
        return previous