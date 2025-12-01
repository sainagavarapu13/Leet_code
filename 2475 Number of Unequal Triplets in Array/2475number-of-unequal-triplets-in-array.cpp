class Solution {
public:
    int unequalTriplets(vector<int>& a) {
        int i,j,k,cnt=0;
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                for(k=j+1;k<a.size();k++){
                    if(a[i]!=a[j]&&a[j]!=a[k]&&a[i]!=a[k]){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};