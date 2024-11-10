class Solution:
    def generateParenthesis(self, n):
        # Helper function for generating valid parentheses combinations
        def parenthesis_helper(open, close, s):
            # If the string has reached the desired length (2 * n), add it to the result list
            if len(s) == 2 * n:
                result.append(s)
                return
            # If we can still add open parentheses, recursively call with an added open parenthesis
            if open < n:
                parenthesis_helper(open + 1, close, s + '(')
            # If we can add a closing parenthesis without violating the balance, recursively call with a close parenthesis
            if close < open:
                parenthesis_helper(open, close + 1, s + ')')

        result = []  # Initialize the result list to store valid combinations
        parenthesis_helper(0, 0, "")  # Start the recursive process with no open or close parentheses
        return result  # Return the list of valid combinations
