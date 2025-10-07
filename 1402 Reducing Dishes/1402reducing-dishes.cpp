class Solution {
public:
    int maxSatisfaction(vector<int>& a) {
        sort(a.begin(),a.end());
        int ans=0;
        int k=1,i;
        int p=0,m=0,l=0;
        while(p<a.size()){
            ans=0;
            k=1;
             for(i=l;i<a.size();i++){
            ans+=(k*a[i]);
            k++;
        }
        m=max(m,ans);
        l++;
        p++;
        }
       return m;
    }
};