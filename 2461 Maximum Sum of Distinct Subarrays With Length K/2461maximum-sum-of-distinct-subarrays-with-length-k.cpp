class Solution {
public:
    long long maximumSubarraySum(vector<int>& a, int k) {
        long long  m =0;
        long long  ans=0;
        unordered_map<int, int>f;
        int j=0,i=0;
        while( j<a.size()){
            m +=a[j];
            f[a[j]]++;
            while( f[a[j]]>1){
                m-=a[i];
                f[a[i]]--;
                if( f[a[i]]==0){
                    f.erase(a[i]);
                }
                i++;
            }
            if( j-i+1==k){
                if(f.size()==k){
                    ans=max( ans , m);
                }
                m-=a[i];
                f[a[i]]--;
                if( f[a[i]]==0){
                    f.erase(a[i]);
                }
                i++;
                j++;
            }else j++;
          
        }
        return ans;
    }
};