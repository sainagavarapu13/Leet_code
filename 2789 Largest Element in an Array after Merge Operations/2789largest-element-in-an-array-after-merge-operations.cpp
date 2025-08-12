class Solution {
public:
    long long maxArrayValue(vector<int>& a) {
        if(a.size()==1) return a[0];
        long long i,sum=a[a.size()-1];
        long long m=INT_MIN;
        for(i=a.size()-2;i>=0;i--){
            if(sum>=a[i]){
                sum+=a[i];
                m=max(m,sum);
            }
            else sum=a[i];
        }
        m=max(sum,m);
        return m;
    }
};