class Solution {
public:
    vector<int> recoverOrder(vector<int>& a, vector<int>& p) {
        vector<int>ans;
        set<int>s(p.begin(),p.end());
        for( int i=0;i<a.size();i++){
            if(s.count(a[i]))ans.push_back(a[i]);
        }
        return ans;
    }
};