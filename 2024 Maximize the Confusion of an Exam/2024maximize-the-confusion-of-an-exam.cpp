class Solution {
public:
    int fun( string a, int k ,  char c ){
        int s=0,cnt=0;
        int ans= INT_MIN;
        for( int e=0;e<a.size();e++){
                if( a[e]!=c){
                    cnt++;
                }
                while( cnt > k){
                    if(a[s]!=c)cnt--;
                    s++;
                    
                }
                ans = max( ans , e-s+1);
        }
        return ans;
    }
    int maxConsecutiveAnswers(string a, int k) {
        return max( fun( a,k,'T'), fun( a, k , 'F'));
    }
};