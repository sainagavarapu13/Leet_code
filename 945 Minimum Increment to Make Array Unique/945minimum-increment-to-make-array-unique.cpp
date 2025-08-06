class Solution {
public:
    int minIncrementForUnique(vector<int>& a) {
        sort(a.begin(),a.end());
        int i,diff,sum=0;
        for(i=0;i<a.size()-1;i++){
            if(a[i]>=a[i+1]){
               int diff=(a[i]-a[i+1]+1);
               sum+=diff;
               a[i+1]+=diff;
            }
        }
        return sum;
    }
};