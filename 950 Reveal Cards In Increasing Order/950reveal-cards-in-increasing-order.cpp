class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& a) {
        int n=a.size();
        vector<int>ans(n);
        sort(a.begin(),a.end());
        int k=0;
       deque<int>dp;
       for(int i=0;i<n;i++){
        dp.push_back(i);
       }
       for(auto& i:a){
        int idx = dp.front();
        ans[idx]=i;
        dp.pop_front();
        dp.push_back(dp.front());
        dp.pop_front();
       }
        return ans;
    }
};