#!/bin/python3

import math
import os
import random
import re
import sys

def minimumBribes(q):
    count = 0
    for i in range(len(q)):
        value = q[i]
        cur = i+1
        if value - cur > 2:
            print("Too chaotic")
            return
        nq = q[max(value - 2, 0):i]
        for k in nq:
            if k > value:
                count += 1
    print(count)

if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        q = list(map(int, input().rstrip().split()))

        minimumBribes(q)
