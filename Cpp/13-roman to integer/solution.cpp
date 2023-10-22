class Solution {
public:
int romanToInt(string s) {
    int sum=0;
    unordered_map<char,int>t;
    // The map is used to store the value of each Roman later
    t['I']=1;
    t['V']=5;
    t['X']=10;
    t['L']=50;
    t['C']=100;
    t['D']=500;
    t['M']=1000;
    for(int i=0;i<s.length();i++){
        //if the literal in the string has less value than the next one than we minus the value of the literal to the total sum
        //like in IV. 'I' value is less than 'V' so we will subtract the value of 'I' from the value of 'V'.
        if(t[s[i]]<t[s[i+1]]){
            sum-=t[s[i]];
        }
    
        else{
            
            sum+=t[s[i]];
        }
    }
    return sum;
}
};
