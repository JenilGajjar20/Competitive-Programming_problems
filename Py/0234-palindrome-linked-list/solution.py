class Solution:
    def rev(self, head):
        prev = None
        nxt = None
        while head:
            nxt = head.next
            # Swapping
            head.next = prev  # Previous node goes to head's next
            prev = head       # Now previous becomes the head
            head = nxt        # Moving the head to head's next
        return prev

    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        """
        Idea💡: First we will find the middle of the list...
                and then reverse the second half...
                and check the is it similar to the first half.
        """
        # Edge case
        if not head or not head.next:
            return True

        # Finding the middle follwoing the two pointer technique.
        slow = head
        fast = head
        while fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next

        # Reverseing the second middle half
        slow.next = self.rev(slow.next)

        dummy_head = head
        slow = slow.next

        # Checking if the last middle values will match the first middle values
        while slow:
            # incase it not similar...
            if slow.val != dummy_head.val:
                return False
            slow = slow.next
            dummy_head = dummy_head.next
        # after checking the both part it's a palindrome list.
        return True