#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

//we make a 2D vector "ans" to to collect the all the right possible answer given the 1D vector temp
vector<vector<int>>ans;

//helper function to do the required
void helper(int sum,int start,int k,int n,vector<int>&temp){
    //base case
    //when size becomes k , we check whether our sum is equals to n or not
    // if it is equal to n, then we got the answer and push the vector temp into the 2D vector ans
    // if it is not equals to n, then we return , as this would not be in our answer 
    if( temp.size()==k){
        if(sum==n){
        ans.push_back(temp);}

        return ;
    }

//here we start the loop form 1 to 9 in order to enquire about the possible cases
    for(int i=start;i<=9;i++){
        //option-01
        temp.push_back(i);
        helper(sum+i,i+1,k, n,temp);
        //here after the work , if for the given indexwe got the answer then wew defintely get saved into 2D vector 'ans' 
        //then we pop the value for the current index , so that for next iteration we make temp frm the that value 
        temp.pop_back();
    }
}



    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        int sum=0;
         helper(sum, 1,k, n,temp);
    return ans;
    }
};