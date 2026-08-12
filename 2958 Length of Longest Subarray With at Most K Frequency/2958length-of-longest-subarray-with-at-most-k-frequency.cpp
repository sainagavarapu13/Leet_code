class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int s=0,e=0;
       map<int,int>m;
       int n = nums.size();
       int ans=0;
        while(e<n){
            m[nums[e]]++;
            while( m[nums[e]]>k){
                m[nums[s]]--;
                s++;
            }
             ans = max( ans , e-s+1);
           e++;
        }
        return ans;
    }
};