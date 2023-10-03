class Solution(object):
    def partitionString(self, s):
        """
        :type s: str
        :rtype: int
        """
        hashSet = set()
        subs = 1  # beacuse the last char if the case is aba for ex

        for i in s:
            if i in hashSet:
                subs += 1
                hashSet = set()  # O(1)
                hashSet.add(i)
            else:
                hashSet.add(i)
        return subs
