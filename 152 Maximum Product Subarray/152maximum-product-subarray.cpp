class Solution {
public:
    int maxProduct(vector<int>& a) {
        int m=INT_MIN;
        int i,j,p;
        for(i=0;i<a.size();i++){
            p=a[i];
            m=max(p,m);
            for(j=i+1;j<a.size();j++){
                p=p*a[j];
                m=max(p,m);
            }   
             }
             return m;
    }
};