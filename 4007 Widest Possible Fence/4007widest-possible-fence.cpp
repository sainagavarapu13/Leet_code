class Solution {
public:
    int maximumWidth(vector<int>& p) {
        map<long long, long long>m;
        int sum=0;
        for( int i : p){
            m[i]++;
        }
        vector<pair<long long,long long>> a;
         for(auto x : m)
             a.push_back(x);   
        //  map<int, int>n;
         for(int i=0;i<a.size();i++){
            if(a[i].second >= 2)
             m[1ll*2*a[i].first] += a[i].second/2;

            for(int j=i+1;j<a.size();j++){
                 m[a[i].first + a[j].first] += min(a[i].second, a[j].second);
             }
        }
       
       long long ans =0;
    //    for( auto [x,y]:n){
    //   //  cout<< x << " " << y <<endl;
    //     ans = max(ans, y+m[x]);
    //    }
        for( auto [x,y]:m){
       // cout<< x << " " << y <<endl;
        ans = max(ans, y);
       }
       return ans;
    }
};