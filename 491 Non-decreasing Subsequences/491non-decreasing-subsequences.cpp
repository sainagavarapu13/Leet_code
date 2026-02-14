class Solution {
public:
    set<vector<int>>ans;
    int n;
    void fun(int s, vector<int>& temp,vector<int>& nums ){
        
        if( s>=n){
          if( temp.size()>=2)
            ans.insert(temp);
            return;
        }
        if( temp.size()==0 || temp.back()<=nums[s]){
            temp.push_back(nums[s]);
            fun(s+1,temp,nums);
            temp.pop_back();
        }
        fun( s+1,temp,nums);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
       n = nums.size();
       vector<int>a;
       fun( 0,a,nums);
        vector<vector<int>>res(ans.begin(),ans.end());
        return res;
        
    }
};