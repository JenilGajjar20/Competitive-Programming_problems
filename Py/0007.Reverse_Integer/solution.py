class Solution:
    def reverse(self, x: int) -> int:
        if x > (2**31 -1):
            return 0
        if x < (-2**31):
            return 0
        if x >= 0:
            if int(str(x)[::-1]) <= (2**31 - 1):
                return int(str(x)[::-1])
            return 0
        else:
            if -int(str(x)[-1:0:-1]) >= (-2**31):
                return -int(str(x)[-1:0:-1])
            return 0