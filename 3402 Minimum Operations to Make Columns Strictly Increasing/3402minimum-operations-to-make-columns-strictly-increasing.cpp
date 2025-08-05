class Solution {
public:
    int minimumOperations(vector<vector<int>>& a) {
        int i,j=0,sum=0;
        while(j<a[0].size()){
        for(i=0;i<a.size()-1;i++){
            if(a[i][j]>=a[i+1][j]){
                int diff=(a[i][j]-a[i+1][j]+1);
                sum+=diff;
                a[i+1][j]+=diff;
            }
        }
        j++;
    }
        return sum;
    }
};