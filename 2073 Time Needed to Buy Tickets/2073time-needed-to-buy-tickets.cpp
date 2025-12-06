class Solution {
public:
    int timeRequiredToBuy(vector<int>& a, int k) {
        int cnt=0;
        for( int i=0;i<=k;i++){
                if( a[i] >0){
                    cnt++;
                    a[i]-=1;
                }
            }
        while( a[k]!=0){
            for( int i=0;i<a.size();i++){
                if( a[i] >0){
                    cnt++;
                    a[i]-=1;
                }
            }
        }
        return cnt;
        
    }
};