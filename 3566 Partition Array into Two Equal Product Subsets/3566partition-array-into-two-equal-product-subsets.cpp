class Solution {
public:
    bool ans(vector<int> &v,int i,long long s1,long long s2,long long target){
        if(s1>target || s2>target) return false;
        if(i==v.size()){
            if(s1==target && s1==s2) return true;
            return false;
        }
        return ans(v,i+1,s1*v[i],s2,target)||ans(v,i+1,s1,s2*v[i],target);
    }
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        return ans(nums,0,1,1,target);
    }
};