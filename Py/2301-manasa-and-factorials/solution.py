#!/bin/python3

# For find the last zero of n!, we need to find the number of 5 in the factorization of n!
# For example, 5! = 1 * 2 * 3 * 4 * 5 = 120, so the last zero is 1
# 10! = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 = 3628800, so the last zero is 2
# so, we need to find the number of 5 in the factorization of n!
def countLastZero(m):

  # if m is 0, return 0
  if m == 0: return 0

  # else, return m // 5 + countLastZero(m // 5)
  return m // 5 + countLastZero(m // 5)

# to find the smallest number containing n trailing zeros, we can use binary search
# we can set the range of m from 0 to 69410085967969100
# we can decrease the range by using binary search
def solve(n):
    # set r = -1
    r = -1

    # set l = 0 and u = 69410085967969100
    l = 0
    u = 69410085967969100

    # start binary search until find the smallest number containing n trailing zeros
    while l <= u:
        # find middle number
        m = (l + u) // 2

        # if the number of trailing zeros of m is greater than or equal to n
        if countLastZero(m) >= n:
            
            # set r to middle number
            r = m

            # set u to middle number - 1
            u = m - 1

        # else 
        else:
            
            # set l to middle number + 1
            l = m + 1
    
    # return as result
    return r

if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = solve(n)

        print(str(result) + '\n')
