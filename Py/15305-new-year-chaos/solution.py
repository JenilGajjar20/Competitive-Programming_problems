#!/bin/python3

import math
import os
import random
import re
import sys

def minimumBribes(q):
    # Initialize a variable called count to keep track of the number of bribes
    count = 0
    # Iterate through the elements of the list q using a for loop
    for i in range(len(q)):
        # Get the value at the current index i in the list q
        value = q[i]

        # Calculate the expected (original) position for the current value
        cur = i + 1

        # Check if the difference between the current value and its expected
        # position is greater than 2
        if value - cur > 2:

            # If the difference is greater than 2, print "Too chaotic" and
            # return from the function
            print("Too chaotic")
            return

        # Create a new list nq containing elements from q starting from
        # max(value - 2, 0) up to i (excluding i)
        nq = q[max(value - 2, 0):i]

        # Iterate through the elements in the new list nq
        for k in nq:

            # Check if the element k is greater than the current value
            if k > value:

                # If it is, increment the count variable (a bribe occurred)
                count += 1

    # Print the total number of bribes
    print(count)


if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        q = list(map(int, input().rstrip().split()))

        minimumBribes(q)
