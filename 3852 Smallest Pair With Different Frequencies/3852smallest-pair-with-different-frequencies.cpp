class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> v;
        for(auto x:m){
            v.push_back(x.first);
        }
        for(int i=0;i<v.size();i++){
            for(int j = i+1;j<v.size();j++){
                if(m[v[i]]!=m[v[j]]){
                    return {v[i],v[j]};
                }
            }
        }
        return {-1,-1};
    }
};