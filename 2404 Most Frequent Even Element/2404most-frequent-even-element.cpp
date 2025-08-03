class Solution {
public:
    int mostFrequentEven(vector<int>& a) {
        int i;
        vector<int>f(100001);
        for(i=0;i<a.size();i++){
            if(a[i]%2==0) f[a[i]]++;
        }
        int  m=-1;
        int ma=0;
        for(i=0;i<f.size();i++){
           // cout<<f[i];
            if(f[i]>ma){
                ma=f[i];
                m=i;
            }
            else if (f[i] == ma && i < m) {
                // If frequencies are equal, choose the smallest number
                m = i;
            }
        }
        return m;
    }
};