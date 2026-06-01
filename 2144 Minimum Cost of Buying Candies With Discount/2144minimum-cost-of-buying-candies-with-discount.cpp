class Solution {
public:
    int minimumCost(vector<int>& a) {
        if(a.size()==1) return a[0];
        if(a.size()==2) return a[0]+a[1];
        sort(a.begin(),a.end(),greater<>());
        int i,cnt=1,sum=0;
        for(i=0;i<a.size();i++){
            if(cnt%3==0) {
            ;}
            else
            sum+=a[i];
            cnt++;

        }
        return sum;
    }
};