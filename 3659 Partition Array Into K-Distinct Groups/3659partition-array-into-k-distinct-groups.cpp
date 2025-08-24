class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        map<int,int>m;
        for(auto& i:nums){
            m[i]++;
        }
        for(auto& [n,c]:m){
            if(c>(nums.size()/k)) return false;
        }
        return true;
    }
};