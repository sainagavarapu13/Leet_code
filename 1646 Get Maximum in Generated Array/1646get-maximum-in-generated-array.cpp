class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>a;
        if(a.size()<n+1)a.push_back(0);
        if(a.size()<n+1)a.push_back(1);
        int i=1;
        for(i=1;i<=n/2;i++){
           if(a.size()<n+1) a.push_back(a[i]);
           if(a.size()<n+1) a.push_back(a[i]+a[i+1]);
           else break;
           
        }
        int m=INT_MIN;
        for(auto& i: a) {
            if(i>m) m=i;
        }
        return m;
    }
};