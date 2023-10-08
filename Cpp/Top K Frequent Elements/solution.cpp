class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int z) {
        vector<int>a(z);
        map<int, int> m;
        int y, maxf, b;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        } 
        for(int i = 0; i<z; i++){
            maxf = 0;
            map<int, int>::iterator mn, it;
            it = m.begin();
            while(it!=m.end()){
                y = it->second;
                if(y>maxf){
                    maxf = y;
                    b = it->first;
                    mn = it;
                }
                it++;
            }
            a[i] = b;
            mn->second = 0;
        }
        return a;
    }
};
