class Solution {
public:
    vector<int> successfulPairs(vector<int>& a, vector<int>& b, long long k) {
        sort(b.begin(),b.end());
        vector<int>ans;
        for(auto& i:a){
            long long temp=(k+i-1)/i;
            auto idx=lower_bound(b.begin(),b.end(),temp)-b.begin();
            ans.push_back(b.size()-idx);
        }
        return ans;
    }
};