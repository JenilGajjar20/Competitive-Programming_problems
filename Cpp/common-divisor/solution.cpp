#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
        return "";
    }

    int gcd_length = __gcd(str1.length(), str2.length());
    return str1.substr(0, gcd_length);
}

int main() {
    string str1 = "ABCABC";
    string str2 = "ABC";

    string result = gcdOfStrings(str1, str2);

    if (result.empty()) {
        cout << "No common divisor found." << endl;
    } else {
        cout << "The largest common divisor is: " << result << endl;
    }

    return 0;
}
