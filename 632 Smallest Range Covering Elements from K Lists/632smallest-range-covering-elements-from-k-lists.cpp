class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& a) {
        vector<pair<int, int>>m;
        for( int i=0;i<a.size();i++){
            for( int j =0;j<a[i].size();j++){
                m.push_back({a[i][j],i});
                
            }
        }
        sort( m.begin(),m.end());
        vector<int> f(a.size(), 0);   
        int cnt=0;
        int x=-1, y=-1;
        int left =0;
        for( int i=0;i<m.size();i++){
            if( f[m[i].second]==0){
                 f[m[i].second]++;
                    cnt++;
            }
           else f[m[i].second]++;
         while(cnt ==a.size()) {  
            if( x==-1 && y ==-1){
                x = m[left].first;
                y = m[i].first;
            }else{
            int p = m[left].first;
            int q = m[i].first;
            if( (q-p == y-x && p<x) ||  q-p < y-x){
                 y=q;
                x=p;
            }}
            if(--f[m[left].second]==0)
            cnt--;
            left++;
            }
            
            
           
        }
        return {x,y};
    }
};