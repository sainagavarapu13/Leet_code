class Solution {
public:
    int minDeletionSize(vector<string>& a) {
        int cnt=0,i,j;
      
        for(i=0;i<a[0].size();i++){
            for(j=1;j<a.size();j++){
                if(a[j-1][i]>a[j][i]){
                    cnt++;
                    break;
                }
            }

        }
    return cnt;
    }
};