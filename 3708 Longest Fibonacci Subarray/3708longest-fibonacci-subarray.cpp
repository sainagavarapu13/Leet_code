class Solution {
public:
    int longestSubarray(vector<int>& a) {
        int n=a.size();
        if(n<=2) return n;
        int m=2;
        int cnt=2;
        for(int i=2;i<a.size();i++){
            if(a[i]==a[i-1]+a[i-2]){
                cnt++;
                m=max(m,cnt);
            }
            else {
             m=max(m,cnt);
             cnt=2;
         }
        }
        return m;
    }
};