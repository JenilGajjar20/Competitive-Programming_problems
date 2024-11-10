class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        # Sort the list of strings
        strs.sort()

        # Initialize the answer string and get the first and last strings
        ans = ""
        fst, lst = strs[0], strs[-1]

        # loop through the characters of the first and last strings
        for i in range(min(len(fst), len(lst))):
            # If the characters at the current position are the same, add to the answer string
            if fst[i] == lst[i]:
                ans += fst[i]
            # If not, break out of the loop as this is where the common prefix ends
            else:
                break

        # Return the computed common prefix
        return ans