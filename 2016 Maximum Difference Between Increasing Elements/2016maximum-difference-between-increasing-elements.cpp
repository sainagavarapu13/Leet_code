class Solution {
public:
    int maximumDifference(vector<int>& a) {
        int i,j;
        int m=-1;
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                if(a[i]<a[j]){
                    m=max(m,(a[j]-a[i]));
                }
            }
        }
        return m;
    }
};