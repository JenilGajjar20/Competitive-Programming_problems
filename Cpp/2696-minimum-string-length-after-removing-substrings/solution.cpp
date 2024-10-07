class Solution {
public:
    int minLength(string s) {
        //Initializing a character stack to keep tract of AB and CD
        stack<char> st;
        //Using a for loop to loop over each and every character in the string.
        for(char x:s) {
            //Here we first check if the stack is not empty, if it is we can safely proceed to check and pop the stack.
            //If it isn't, that means we are on the initialization phase, and we push the first character onto the stack.
            //Next we check if the top of the stack is equal to A alongside the current element being b,
            //This helps us to check for the case where AB was going to occur, which we want to remove, hence we pop the stack.
            //Similar pattern is used for the removal of CD as well/
            if(!st.empty() && ((st.top()=='A' && x=='B') || (st.top()=='C' && x=='D'))) st.pop();
            else st.push(x);
        }
        //The Elements left after popping the stack will consist of those which are not of the form AB or CD in a string.
        return st.size();
    }
};


//Standard CPP optimization.
static const auto init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();