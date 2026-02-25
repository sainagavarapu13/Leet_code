class Solution {
public:
    int bit(int a){
        int cnt=0;
        while(a){
            if( a%2==1) cnt++;
            a/=2;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& b) {
        vector<pair<int,int>>a;
        for( int i=0;i<b.size();i++){
                int cnt=bit(b[i]);
                a.push_back({b[i],cnt});
                
        }
        sort(a.begin(),a.end(),[](auto& x,auto& y){
            if( x.second == y.second) return x.first <y.first;
            else return x.second < y.second;
        });
        vector<int>res;
        for( auto& i:a){
            res.push_back(i.first);
        }
        return res;
    }
};