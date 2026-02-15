class Solution {
public:
    int minOperations(vector<int>& a) {
        map<int,int>m;
        for( int i:a){
            m[i]++;
        }
        int cnt=0;
        for( auto[x,y]:m){
            if( y ==1) return -1;
            cnt+=y/3;
            if( y%3) cnt++;
        }
        return cnt;
    }
};