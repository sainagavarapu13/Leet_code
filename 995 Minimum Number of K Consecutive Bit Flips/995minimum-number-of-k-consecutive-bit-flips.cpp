class Solution {
public:
    int minKBitFlips(vector<int>& a, int k) {
        int start=0,end=0;
        int n=a.size();
        vector<int>fp(n,0);
        int cnt=0,ans=0;
        for(int i=0;i<a.size();i++){
            if(i>=k)
             cnt-=fp[i-k];
            if(cnt%2!=0){
                a[i]=1-a[i];
            }
            if(a[i]==0){
                if(i+k>n) return -1;
                fp[i]=1;
                cnt++;
                ans++;
            }
           
        }
        return ans;
    }
};