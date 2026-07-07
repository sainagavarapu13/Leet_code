class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int> v0,v1,v2;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%3==0) v0.push_back(nums[i]);
            else if(nums[i]%3==1) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }
        sort(v0.begin(),v0.end());
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int res = 0;
        int n0=v0.size(),n1=v1.size(),n2=v2.size();
        if(v0.size()>=3) res = max(res,v0[n0-1]+v0[n0-2]+v0[n0-3]);
        if(v1.size()>=3) res = max(res,v1[n1-1]+v1[n1-2]+v1[n1-3]);
        if(v2.size()>=3) res = max(res,v2[n2-1]+v2[n2-2]+v2[n2-3]);
        if(v0.size()>0 && v1.size()>0 && v2.size()>0) res = max(res,v0[n0-1]+v1[n1-1]+v2[n2-1]);
        return res;
    }
};