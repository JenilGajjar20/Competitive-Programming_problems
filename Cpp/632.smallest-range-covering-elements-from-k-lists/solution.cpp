class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;
        int maxEle=INT_MIN;
        for(int i=0; i<nums.size(); i++) {
            minHeap.push({nums[i][0],i,0});
            maxEle=max(maxEle,nums[i][0]);
        }
        int low=0, high=INT_MAX;
        
        while(true) {
            auto current = minHeap.top();
            minHeap.pop();
            int minEle = current[0], arr_idx=current[1], ele_idx=current[2]; 
            if(maxEle-minEle<high-low) {
                high=maxEle;
                low=minEle;
            }
            if(ele_idx+1==nums[arr_idx].size()) break;
            int nextEle=nums[arr_idx][ele_idx+1];
            minHeap.push({nextEle,arr_idx,ele_idx+1});
            maxEle=max(maxEle,nextEle);
        }
        return {low,high};
    }
};

static const auto init = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();