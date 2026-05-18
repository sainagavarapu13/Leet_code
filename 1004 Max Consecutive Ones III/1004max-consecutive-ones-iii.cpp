class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int ans=0;
        int cnt=0;
        int i=0,j=0;
        while( j<a.size()){
          if( a[j]==0) cnt++;
          while( cnt > k){
            if( a[i]==0) cnt--;
            i++;
          }
         ans = max( ans , j-i+1);
          j++;
        }
        return ans;
    }
};