class Solution {
public:
    long long minimumSteps(string s) {
        //Initialise both steps and ones
        long long steps=0;
        long long ones=0;
        //For every character,
        for(char c: s) {
            //If the character is 1, count it in the ones variable
            if(c=='1') {
                ones+=1;
            } else if(c=='0'&& ones>0) { //else if it a 0 after 1, add it to steps
                steps+=ones;
            }
        }
        //Return steps
        return steps;
    }
};

static const auto init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();