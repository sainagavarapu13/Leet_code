class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& a) {
        sort( a.begin(), a.end());
        vector<vector<int>>g(n);
        vector<int>v(n,0);
       // vector<int>sus(n,0);
       unordered_map<int, int>m;
        for( int i=0;i<a.size();i++){
            m[a[i][1]]=a[i][0];
           g[a[i][0]].push_back(a[i][1]);
        }
        queue<int>q;
        q.push(k);
        while(!q.empty()){
            int u = q.front();
             q.pop();
             if(v[u]) continue;
             //sus[u]=1;
            v[u]=1;
           
            for( auto i :g[u]){
                q.push(i);
            }
        }
        vector<int>ans;
        int f=0;
        for( auto i : a){
            int x= i[0] , y = i[1];
            if( !v[x] && v[y]){
                f=1;
                break;
            }
        }
         vector<int>res;
        if( f){
            for( int i=0;i<v.size();i++){
                res.push_back(i);
            }
        }else{
            
            for( int i=0;i<v.size();i++){
               if(!v[i]) res.push_back(i);
            }
        }
      
        
        return res;
    }
};