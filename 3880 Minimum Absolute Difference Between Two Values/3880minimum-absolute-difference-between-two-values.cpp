class Solution {
public:
    int minAbsoluteDifference(vector<int>& a) {
        int mini=INT_MAX;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                if(i==j) continue;
                if(a[i]==1&&a[j]==2){
                    mini=min(mini,abs(i-j));
                }
            }
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};