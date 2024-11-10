class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int res=0;
        int i=0;
        while(i<n){
            if(st.empty() || heights[st.top()] <= heights[i]){
                st.push(i);
                i++;
            }
            else{
                int top = st.top();
                st.pop();
                int area = heights[top]*(st.empty() ? i : i-st.top()-1);
                res = max(res, area);
            }
        }

        while(!st.empty()){
            int top = st.top();
            st.pop();
            int area = heights[top]*(st.empty() ? i : i-st.top()-1);
            res = max(res, area);
        }
        return res;
    }
};