class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        int n = s.size(),a = s[0].size();
        vector<vector<int>> v(n,vector<int>(a,0));
        vector<pair<int,int>> u(n,{0,0});
        for(int i=0;i<n;i++){
            u[i].first = s[i][k];
            u[i].second = i;
        }
        sort(u.rbegin(),u.rend());
        int m =0;
        for(auto x:u){
            for(int i=0;i<a;i++){
                v[m][i] = s[x.second][i];
            }
            m++;
        }
        return v;
    }
};