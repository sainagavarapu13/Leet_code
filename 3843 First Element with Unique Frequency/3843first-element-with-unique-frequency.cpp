class Solution {
public:
    int firstUniqueFreq(vector<int>& a) {
        map<int,int>m,n;
        for( int i : a){
            m[i]++;
        }
        for( auto [x,y]:m){
            n[y]++;
        }
        for( int i:a){
            if( n[m[i]]==1) return i;
        }
        return  -1;
    }
};