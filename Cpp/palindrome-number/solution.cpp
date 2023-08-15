#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    // Negative numbers or equal to zero are not a palindrome numbers
    if (n < 0 || (n % 10 == 0 && n != 0))
        return false;

    int reverseHalf = 0;
    while (n > reverseHalf)
    {
        reverseHalf = reverseHalf * 10 + n % 10;
        n /= 10;
    }

    return n == reverseHalf || n == reverseHalf / 10;
}

int main()
{
    int n; // n is the number
    cout << "Input any number: ";
    cin >> n;

    bool result = isPalindrome(n);
    if (result)
        cout << "Number " << n << " is Palindrome";
    else
        cout << "Number " << n << " is not Palindrome";
    return 0;
}