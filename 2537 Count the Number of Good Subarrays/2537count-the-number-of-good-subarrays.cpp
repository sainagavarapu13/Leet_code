class Solution {
public:
    long long countGood(vector<int>& a, int k) {
        map<int,long long>m;
        int s=0;
        long long p=0,tot=0;
        long long ans=0;
        for( int i=0;i<a.size();i++){
           tot+=m[a[i]];
            m[a[i]]++;
           
            while(tot>=k){
                ans +=a.size()-i;
                 m[a[s]]--;
                tot-=m[a[s]];
               
                 s++;
            }
            
        }
        return ans;
    }
};