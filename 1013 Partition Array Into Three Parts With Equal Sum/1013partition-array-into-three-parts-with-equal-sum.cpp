class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& a) {
        int sum=0;
        for( int i=0;i<a.size();i++){
            sum+=a[i];
        }
        if( sum%3 !=0) return 0;
        int tar = sum/3;
        int cnt=0,par =0;
        for( int i=0;i<a.size()-1;i++){
                par+=a[i];
                if( tar == par){
                    cnt++;
                    par =0;
                    if( cnt==2) return true;
                }
        }
        return 0;
    }
};