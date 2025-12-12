class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& b) {
        if (b.empty()) return 0;
        vector<pair<int,int>> v(n+1,{n+1,0});
        vector<pair<int,int>> u(n+1,{n+1,0});
        for(int i=0;i<b.size();i++){
            int a  = b[i][0];
            int c  = b[i][1];
            if(a>v[c].second){
                v[c].second = a;
            }
            if(a<v[c].first){
                v[c].first = a;
            }
            if(c>u[a].second){
                u[a].second = c;
            }
            if(c<u[a].first){
                u[a].first = c;
            }
        }
        int res=0;
        for(int i=0;i<b.size();i++){
            int a  = b[i][0];
            int c  = b[i][1];
            if(v[c].first<a && v[c].second>a && u[a].first<c && u[a].second>c) res++;
        }
        return res;
    }
};