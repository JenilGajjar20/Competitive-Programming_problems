//We will use a STL map of <int,vector<int>>, here the key is the groupsize 
// we will push index to its map[groupsize] vector till vector size equals groupsize
//then we push that vector to ans vector, remove it from the map

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> mp;

        //ans vector<vector> to store groups as required
        vector<vector<int>> ans;

        //traversing the groupSizes vector
        for(int i=0;i<groupSizes.size();i++){
            //for groupSizes[i] we push i to the map, with groupSizes[i] as key
            mp[groupSizes[i]].push_back(i);

            //once the vector size of a map value equals its key i.e. groupSize, we push it to 'ans'
            if(mp[groupSizes[i]].size()==groupSizes[i]){
                ans.push_back(mp[groupSizes[i]]);

                //deleting the pushed vector from map value
                mp[groupSizes[i]]=vector<int>{};
            }
        }
        return ans;
    }
};