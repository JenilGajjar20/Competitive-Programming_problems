#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    unordered_map<char, char> closingToOpening = {
        {')', '('},
        {'}', '{'},
        {']', '['},
    };

    for (char ch : s)
    {
        // Check if the parenthesis are present. If so then push into the stack.
        if (ch == '(' || ch == '{' || ch == '[')
            st.push(ch);

        else if (ch == ')' || ch == '}' || ch == ']')
        {
            // Check if the stack is empty or check whether the top element of the stack doesn't match the corresponding opening bracket for the current closing bracket.
            if (st.empty() || st.top() != closingToOpening[ch])
                return false;

            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    string input = "{[()]}";
    bool isValidParenthesis = isValid(input);

    if (isValidParenthesis)
        cout << "The string is valid." << endl;
    else
        cout << "The string is not valid." << endl;

    return 0;
}