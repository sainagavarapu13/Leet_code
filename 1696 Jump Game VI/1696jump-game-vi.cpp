class Solution {
public:
    int maxResult(vector<int>& a, int k) {
        int n = a.size();
        vector<int> dp(n,0);
        priority_queue<pair<int,int>> q;
        dp[0] = a[0];
        q.push({dp[0], 0});
        for(int i = 1; i < n; i++){
            while(!q.empty() && q.top().second + k < i) q.pop();

            dp[i] = q.top().first + a[i];
            q.push({dp[i], i});
        }
        return dp.back();
    }
};