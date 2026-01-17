class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& a, vector<int>& b, int k) {
        vector<int>temp;
        map<int,vector<pair<int,int>>>m;
        for(int i=0;i<a.size();i++){
           
                int dis = abs(a[i][0]-b[0])+abs(a[i][1]-b[1]);
                if(dis<=k){
                    m[a[i][2]].push_back({a[i][0],a[i][1]});
                }
            
        }
        int first;
        for(auto& [n,c]:m){
             first = n;
          //  break;
        }
        if (m.empty()) return {-1,-1};
        vector<pair<int,int>>v;
        for(auto& [n,c]:m){
           if(n==first){
               for(int i=0;i<c.size();i++){
                   v.push_back({c[i].first,c[i].second});
                   
               }
           }
        }
        sort(v.begin(),v.end(),[](auto& x , auto& y){
            if(x.first==y.first){
                return x.second<y.second;
            }
            else return x.first<y.first;
        });
        vector<int>ans;
        ans.push_back(v[0].first);
         ans.push_back(v[0].second);
        return ans;
    }
};