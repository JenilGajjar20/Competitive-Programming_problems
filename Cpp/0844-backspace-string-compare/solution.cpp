class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //s1 and s2 will be final strings after operations on s and t respectively
        string s1, s2;

        //Resizing s1 and s2 to lengths of s and t respectively
        s1.resize(s.length());s2.resize(t.length());

        //j is used for index in s1 and k in s2.
        int j=0,k=0;

        //traverse through given string s
        for(int i=0;i<s.length();i++){
            //if '#' is found in 's' we decrease the current index j by 1, also such that j remains >0
            if(s[i]=='#' && j>0) j--;

            //if ith of 's' is other than '#' we place that character at jth of 's1', and increment j by 1
            if(s[i]!='#') s1[j++]=s[i];
        }
        //traverse through given string t
        for(int i=0;i<t.length();i++){
            //if '#' is found in 't' we decrease the current index k by 1, such that k remains >0
            if(t[i]=='#' && k>0) k--;

            //if ith of 't' is other than '#' we place that character at kth of 's2', and increment k by 1
            if(t[i]!='#' ) s2[k++]=t[i];
        }
        //now j and k has the index of last added charcter+1, hence we resize it using substr()
        s1=s1.substr(0,j),s2=s2.substr(0,k);
        //check if s1 equals s2
        return s1==s2?true:false;
    }
};