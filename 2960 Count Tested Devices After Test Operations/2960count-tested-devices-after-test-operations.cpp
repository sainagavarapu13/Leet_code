class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        int n = b.size(),a=0;
        for(int i=0;i<n;i++){
            if(b[i]==0){
                continue;
            }
            else{
                a++;
            for(int j=i+1;j<n;j++){
                if(b[j]==0){
                    continue;
                }
                b[j]--;
            }
            }
        }
        return a;
    }
};