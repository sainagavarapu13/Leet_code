class Solution {
public:
    long long countGood(vector<int>& a, int k) {
        int start=0,end=0;
        map<int,int>m;
        int n=a.size();
        long long ans=0;
        long long cnt=0;
        while(end<a.size()){
             cnt+=m[a[end]];
            m[a[end]]++;
             while(cnt>=k){
                  ans+=(n-end);
                m[a[start]]--;
                cnt-=m[a[start]];
                start++;
               
            }
           end++;
        }
        return ans;
    }
};