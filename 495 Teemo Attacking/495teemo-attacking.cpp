class Solution {
public:
    int findPoisonedDuration(vector<int>& a, int b) {
        int ans=0;
        for( int i=1;i<a.size();i++){
         int in = a[i-1]+b;
         if( a[i]<in){
            ans+=a[i]-a[i-1];
         }else{
            ans+=b;
         }
        }
        ans+=b;
        return ans;
    }
};