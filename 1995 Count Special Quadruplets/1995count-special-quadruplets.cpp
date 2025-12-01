class Solution {
public:
    int countQuadruplets(vector<int>& a) {
        int i,j,k,l,cnt=0;
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                for(k=j+1;k<a.size();k++){
                    int s=a[i]+a[j]+a[k];
                    for(l=k+1;l<a.size();l++){
                        if(a[l]==s){
                            cnt++;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};