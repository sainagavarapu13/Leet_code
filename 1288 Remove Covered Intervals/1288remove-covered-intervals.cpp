class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& a) {
        sort(a.begin(),a.end(),[](auto& x,auto& y){
            if(x[0]==y[0]){
                return x[1]>y[1];
            }
            return x[0]<y[0];
        });
       // for(auto& i:a) cout<<i[0]<<" "<<i[1]<<"\n";
        int start = a[0][0];
        int end = a[0][1];
        int cnt=0;
        for(int i=1;i<a.size();i++){
            int st=a[i][0];
            int en=a[i][1];
            if(end>=st&&end>=en&&start<=st&&start<=en){
                cnt++;
            }
            else{
            start = st;
            end = en;
            }
        }
        int n=a.size();
        return n-cnt;
    }
};