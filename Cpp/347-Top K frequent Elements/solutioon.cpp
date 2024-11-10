class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans(k,0);
        unordered_map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
        }
        multimap<int,int,greater<int>>m;
        for(auto &j:mp){
            m.insert({j.second,j.first});
        }
        int cnt=0;
        for(auto &i:m){
            ans[cnt]=i.second;
            cnt++;
            if(cnt==k)break;
        }
        return ans;
    }
};
