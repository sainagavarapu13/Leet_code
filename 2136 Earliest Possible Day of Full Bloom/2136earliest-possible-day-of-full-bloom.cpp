class Solution {
public:
    int earliestFullBloom(vector<int>& a, vector<int>& b) {
        vector<pair<int,int>>p;
        for(int i=0;i<a.size();i++){
            p.push_back({b[i],a[i]});
        }
        sort(p.begin(),p.end(),greater<>());
        int m=0;
        int pre=-1;
        for(auto& [i,j]:p){
            pre+=j;
            m=max(m,pre+i);
        }
        return m+1;
    }
};