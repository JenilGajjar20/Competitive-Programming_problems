#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

namespace boost::multiprecision;
using namespace std;

cpp_int extraLongFactorial(int n)
{
    cpp_int fact = 1;
    for (int i = n; i > 1; i--)
        fact *= i;

    return fact;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cpp_int result = extraLongFactorial(n);
    cout << "Result: " << result << endl;

    return 0;
}