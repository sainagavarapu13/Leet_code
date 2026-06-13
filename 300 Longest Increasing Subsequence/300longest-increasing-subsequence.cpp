class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int ans=1;
        vector<int>b(a.size(),1);
        for( int i=0;i< a.size();i++){
            for( int j=0;j<i;j++ ){
                if( a[j]<a[i]){
                    if( b[j]+1 > b[i]){
                        b[i]=b[j]+1;
                      //  cout << a[j] <<" " << a[i] <<endl;
                        ans = max( b[i],ans);
                    }
                }
            }
        }
        return  ans;
    }
};