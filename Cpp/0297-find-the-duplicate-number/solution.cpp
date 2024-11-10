/**Solution with 
 * Time Complexity: O(N)
 * Space Complexity: O(N)*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Create a STL hashmap of (int,bool), we will use the logic that 
        //while traversing the array if an element is already visited i.e. value is true then it is the repeated element
        //STL set can also be used
        unordered_map<int,bool> mp;

        //traverse the vector
        for(int val:nums){
            //we assign true to an element if it is not visited before
            if(mp[val]==false) mp[val]=true;

            //return the element if the element is already visited
            else return val;
        }
        return 0;
    }
};