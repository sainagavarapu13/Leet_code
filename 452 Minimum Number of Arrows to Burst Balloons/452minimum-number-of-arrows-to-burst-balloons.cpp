class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& a) {
        vector<pair<int , int>>p;
        for( auto i : a){
           p.push_back({i[0],i[1]});
        }
        sort( p.begin() ,p.end(),[](auto x, auto y){
return x.second <y.second;
        });
        int f =-1;
        int cnt=0;
        for( auto [ x, y]:p){
            if( f==-1) {
                f = y;
                cnt++;
                continue;
            }
            if( x<= f && y>=f){
                
            }else{
                //cout << x <<" "<< y << endl;
                cnt++;
                f =y;
            }
        }
        return cnt;
        
    }
};