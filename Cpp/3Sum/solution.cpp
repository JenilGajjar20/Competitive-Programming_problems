class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        set<vector<int>> st;
        for(int i=0; i<n-2; i++){
            int l = i+1, r = n-1;
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0){
                    st.insert({nums[i], nums[l], nums[r]});
                    l++;  r--;
                }
                else if(sum > 0)  r--;
                else  l++;
            }
        }

        vector<vector<int>> res;
        for(auto &v: st){
            res.push_back(v);
        }
        return res;
    }
};