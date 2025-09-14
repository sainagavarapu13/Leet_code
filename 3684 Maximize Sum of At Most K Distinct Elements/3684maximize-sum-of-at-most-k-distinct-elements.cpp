class Solution {
public:
    vector<int> maxKDistinct(vector<int>& a, int k) {
        
        set<int>set(a.begin(),a.end());
       vector<int>b(set.begin(),set.end());
        sort(b.begin(),b.end(),greater<>());
        int i=0;
        vector<int>ans;
        for(auto& i:b) cout<<i<<" ";
        for(i=0;i<b.size()&&i<k;i++){
            ans.push_back(b[i]);
            
        }
        return ans;
    }
};