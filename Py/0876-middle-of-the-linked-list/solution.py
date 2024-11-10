# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        firstP = secoundP = head
        while secoundP != None: # move the secound pointer first and if it becomes None just return firstPointer
          secoundP = secoundP.next 
          if secoundP == None:
            return firstP
          secoundP = secoundP.next
          firstP = firstP.next
        return firstP
