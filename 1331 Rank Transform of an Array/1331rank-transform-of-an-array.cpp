class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        set<int>B(a.begin(),a.end());
        vector<int>b(B.begin(),B.end());
        sort(b.begin(),b.end());
        vector<int>ans;
        map<int,int>m;
        for(int i=1;i<=b.size();i++){
            m[b[i-1]]=i;
        }
        for(int i=0;i<a.size();i++){
            ans.push_back(m[a[i]]);
        }
        return ans;
    }
};