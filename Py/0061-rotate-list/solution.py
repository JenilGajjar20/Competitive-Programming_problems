class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head is None or head.next is None or k == 0:
            return head

        length = 1
        current = head

        # Calculate the length of the linked list
        while current.next:
            length += 1
            current = current.next

        # Connect the last node to the head to make it a circular linked list
        current.next = head

        # Calculate the actual number of rotations needed (k % length)
        k = k % length

        # Calculate the new position of the last node after rotation
        k = length - k

        # Move the current pointer to the new position of the last node
        for _ in range(k):
            current = current.next

        # Update the head and break the circular structure
        new_head = current.next
        current.next = None

        # return the new head of the linked list
        return new_head