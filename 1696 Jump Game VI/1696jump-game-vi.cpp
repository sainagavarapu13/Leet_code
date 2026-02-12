class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> s;
        int n = nums.size();
        vector<int>dp(n,0);
        dp[0] = nums[0];
        s.push({dp[0],0});
        for(int i=1;i<n;i++){
            while(!s.empty() && s.top().second + k < i) s.pop();
            dp[i] = s.top().first + nums[i];
            s.push({dp[i],i});
        }
        return dp.back();
    }
};