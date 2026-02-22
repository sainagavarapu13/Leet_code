class Solution {
public:
    int scoreDifference(vector<int>& a) {
        int p1=0,p2=0;
        int av =0;
        for( int i=0;i<a.size();i++){
            if( a[i]%2==1){
                av^=1;
            }
            if( i%6==5){
                av^=1;
            }
            if( av==0) p1+=a[i];
            else p2+=a[i];
        }
        return p1-p2;
    }
};