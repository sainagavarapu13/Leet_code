class Solution {
public:
    int incremovableSubarrayCount(vector<int>& a) {
        int cnt=0,flag=0;
        for(int i=0;i<a.size();i++){
            for(int j=i;j<a.size();j++){
                int last=-1;
                flag=0;
                for(int k=0;k<a.size();k++){
                    if(i<=k&&k<=j) continue;
                    if(last>=a[k]){
                        flag=1;
                        break;
                    }
                    last=a[k];
                }
                if(flag==0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};