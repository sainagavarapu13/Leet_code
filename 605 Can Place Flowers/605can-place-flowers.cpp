class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int cnt =0;
        for( int i=0;i<a.size();i++){
            if( a[i]==0){
                int l = ( i==0) || (a[i-1]==0);
                int r = (a.size()-1 == i) ||(a[i+1]==0);
                if( l && r) {cnt++; a[i]=1;}
            }
        }
        if( cnt >=n) return 1;
        else return 0;
    }
};