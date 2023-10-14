# Create a function called flippingBits that takes an integer n as a parameter
def flippingBits(n):
    # Just return the bitwise XOR of n and 2**32 - 1
    # 2**32 - 1 is the binary representation of 32 1s
    # XORing a number with 1 will flip the bits
    # with this way, we don't need to convert the number to binary
    # and decrase the time complexity
    return n ^ (2**32 - 1)

if __name__ == '__main__':
    q = int(input().strip())

    for q_itr in range(q):
        n = int(input().strip())

        result = flippingBits(n)

        print(str(result) + '\n')