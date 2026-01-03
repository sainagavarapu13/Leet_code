class Solution {
public:
    int findTheDistanceValue(vector<int>& a, vector<int>& b, int d) {
        int ans=0;
        for( int i=0;i<a.size();i++){
         
            int f=0;
            for( int j:b){
                if( abs(a[i]-j)<=d) {
                    f=1;
                    break;
                }
            }
            if(!f) ans++;
        }
        return ans;
        
    }
};