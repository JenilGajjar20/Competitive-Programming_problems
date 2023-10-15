#!/bin/python3

def repeatedString(s, n):
    # count the number of 'a' in string s
    total_a = s.count('a')

    # calculate the number of times s will be repeated
    b = n // len(s)

    # calculate the number of 'a' in the repeated string
    total_a = total_a * b

    # calculate the number of 'a' in the remaining string
    left = n % len(s)

    # find remaining substring
    sub_s = s[0:left]

    # add the number of 'a' in the remaining string to total_a
    total_a += sub_s.count('a')

    # return as result
    return total_a

if __name__ == '__main__':
    s = input()

    n = int(input().strip())

    result = repeatedString(s, n)

    print(str(result) + '\n')
