class Solution:
    def countPrimes(self, n: int) -> int:
        # no primes lesser than 2
        if n<2:
            return 0
        # initialise a list with n True's, assume all numbers >=2 are prime
        primes = [True]*n
        ans = 0
        for i in range(2,n):
            # if prime then increment count
            if primes[i]:
                ans+=1
                '''mark all multiples of i (starting from i*i) as non-prime 
                start at i*i because smaller multiples of i (like i*2, i*3, ...) 
                will have already been marked by previous primes'''
                for j in range(i*i,n,i):
                    primes[j] = False

        return ans

if __name__ == "__main__":
    soln = Solution()
    # Test cases
    print(soln.countPrimes(10))  
    print(soln.countPrimes(0))   
    print(soln.countPrimes(1))   
    print(soln.countPrimes(20))  
    print(soln.countPrimes(30))  

# Time complexity: O(nloglogn)
# Space complexity: O(n)
