class Solution
{
public:
    char solve(vector<char> &temp, char op)
    {
        if (op == '!')
        {
            return temp[0] == 'f' ? 't' : 'f'; // Negate the first element
        }
        else if (op == '&')
        {
            for (char &ch : temp)
            {
                if (ch == 'f')
                {
                    return 'f'; // If any 'f', the result is 'f'
                    break;
                }
            }
            return 't'; // Otherwise, the result is 't'
        }
        else if (op == '|')
        {
            for (char &ch : temp)
            {
                if (ch == 't')
                {
                    return 't'; // If any 't', the result is 't'
                    break;
                }
            }
            return 'f'; // Otherwise, the result is 'f'
        }
        return 'f'; // Default case (shouldn't reach here)
    }

    bool parseBoolExpr(string exp)
    {
        stack<char> st;

        for (char &ch : exp)
        {
            if (ch == ',')
            {
                continue; // Ignore commas
            }
            else if (ch == ')')
            {
                vector<char> temp;

                // Collect all characters until '('
                while (st.top() != '(')
                {
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop(); // Remove the '('

                char op = st.top(); // Get the operator ('!', '&', or '|')
                st.pop();           // Remove the operator

                // Solve the current expression and push the result
                st.push(solve(temp, op));
            }
            else
            {
                st.push(ch); // Push characters ('t', 'f', operators, '(') onto
                             // the stack
            }
        }
        return st.top() == 't'; // The final result is at the top of the stack
    }
};
