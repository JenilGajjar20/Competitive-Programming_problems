#include<bits/stdc++.h>
using namespace std;

int evalRPN(vector<string>& t) {
    stack<int> st;
    int a=0,b=0;
    for(int i=0; i<t.size(); i++) {
        if(t[i]!="+" && t[i]!="-" && t[i]!="*" && t[i]!="/")
            st.push(stoi(t[i]));
        else {
            a = st.top();st.pop();
            b = st.top();st.pop();

            if(t[i] == "+")
                st.push(a+b);
            else if(t[i] == "-")
                st.push(b-a);
            else if(t[i] == "*")
                st.push(a*b);
            else
                st.push(b/a);

            cout << st.top() << " ";
        }
    }
    return st.top();
}

int main() {
    int n; // size of the expression
    int i; // variable used for iteration
    int ans; // variable for storing the value of the expression
    vector<string> t; // variable for storing the expression

    cout << "Enter the expression size: " << endl;
    cin >> n;

    cout << "Enter the expression: " << endl;
    for(int i=0; i<n; i++) {
        string temp; // storing the input string temporarily
        cin >> temp;
        t.push_back(temp);
    }

    ans = evalRPN(t);

    cout << "The value of the expression provided is = " << ans << endl;
}