class Solution:
    def merge(self, l, r):
        """
        Merge two sorted linked lists.

        :param l: ListNode representing the left list
        :param r: ListNode representing the right list
        :return: Merged sorted ListNode
        """
        if l is None or r is None:
            return r if l is None else l

        temp = ListNode()
        curr = temp
        # placing each two list node in a sorted order
        while l is not None and r is not None:
            if l.val < r.val:
                curr.next = l
                l = l.next
            else:
                curr.next = r
                r = r.next
            curr = curr.next
        # adding if anything is remaining
        if l is None or r is None:
            curr.next = r if l is None else l

        return temp.next

    def get_middle(self, p):
        """
        Find the middle of a linked list.

        :param p: ListNode representing the list
        :return: Middle ListNode
        """
        slow = p
        fast = p
        # follwoing two pointer approch.
        # slow will take 1 step
        # fast will take 2 step
        while fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next

        return slow

    def sortList(self, head):
        """
        Sort a linked list using merge sort.

        :param head: ListNode representing the head of the list
        :return: Sorted ListNode
        """
        if head is None or head.next is None:
            return head

        mid = self.get_middle(head) # finding the middle of the linked list
        # separatting the first half
        left = head
        right = mid.next # and the second half.
        mid.next = None
        # recursive calls
        left = self.sortList(left)      # on left part
        right = self.sortList(right)    # on right part.

        return self.merge(left, right)  # returning the complete marged list.