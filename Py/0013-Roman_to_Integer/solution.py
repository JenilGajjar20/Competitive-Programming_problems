class Solution:
    def romanToInt(self, s: str) -> int:
        d={"I":1, "IV":4, "V":5, "IX":9, "X":10, "XL":40, "L":50, "XC":90, "C":100, "CD":400, "D":500, "CM":900, "M":1000}
        a=0
        i=0
        while i<=len(s)-1:
            if (i+1<=len(s)-1) and ((s[i]+s[i+1]) in d.keys()):
                a=a+d.get(s[i]+s[i+1])
                i+=2
                
            else:
                a=a+d.get(s[i])
                i+=1
        #a=a+d.get(s[-1])      
        return a