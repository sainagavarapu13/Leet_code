class Solution {
public:
    int numOfPairs(vector<string>& a, string k) {
        int i,j,cnt=0;
        for(i=0;i<a.size();i++){
            for(j=0;j<a.size();j++){
                if(i==j) continue;
                if(a[i]+a[j]==k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};