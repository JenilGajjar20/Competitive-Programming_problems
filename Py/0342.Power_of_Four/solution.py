class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        a=0
        ans=False
        while 4**a<=n:
            if 4**a==n:
                ans=True
                break
                
            else :
                a+=1
        return ans