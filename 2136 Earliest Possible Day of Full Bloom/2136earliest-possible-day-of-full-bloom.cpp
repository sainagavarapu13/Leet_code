class Solution {
public:
    int earliestFullBloom(vector<int>& p, vector<int>& g) {
        int n = p.size();
        vector<pair<int,int>> s(n);
        for(int i=0;i<n;i++){
            s[i] = {g[i],p[i]};
        }
        sort(s.rbegin(),s.rend());
        int c = 0,m=0;
        for(auto &[g,plant]:s){
            c +=plant;
            m = max(m,c+g);
        }
        return m;
    }
};