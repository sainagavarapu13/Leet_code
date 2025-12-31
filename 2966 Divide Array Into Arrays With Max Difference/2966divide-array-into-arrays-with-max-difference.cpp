class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> q;
        for(int i=0;i<nums.size()-1;i++){
            vector<int> v;
            if(abs(nums[i]-nums[i+1])<=k && abs(nums[i+2]-nums[i])<=k){
                v.push_back(nums[i]);
                v.push_back(nums[i+1]);
                v.push_back(nums[i+2]);
                i = i+2;
            }
            else{
                vector<vector<int>> b;
                return b;
            }
            if(v.size()>0) q.push_back(v);
        }
        return q;
    }
};