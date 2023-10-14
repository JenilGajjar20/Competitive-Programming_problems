#!/bin/python3

# Import the math module
import math


# Create a function called divisors that takes an integer n as a parameter
def divisors(n):
    # Check if n is odd
    if n % 2 != 0:
        # If it is, return 0 (no even divisors)
        return 0
    # Otherwise, check if n is a perfect square
    else:
        # Set counter variable to 0
        count = 0
        
        # Calculate the square root of n to use as the upper limit
        limit = math.sqrt(n)

        # Set the i variable to 1
        i = 1

        # Iterate through the numbers from 1 to the square root of n 
        while i <= limit:
            
            # Check if i is a divisor of n
            if n % i == 0:
                
                # If it is, check if i is even
                if i % 2 == 0:
                    
                    # Increment the counter variable
                    count += 1

                # Check if n divided by i is even and it is perfect square
                k = n // i
                if k % 2 == 0 and k != i:
                    
                    # If it is, increment the counter variable
                    count += 1

            # Increment i by 1
            i += 1

        # Return the counter variable
        return count

if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = divisors(n)

        print(str(result) + '\n')