class Solution {
public:
    bool findSubarrays(vector<int>& a) {
        int i,j;
        for(i=0;i<a.size()-1;i++){
            for(j=i+1;j<a.size()-1;j++){
                if(a[i]+a[i+1]==a[j]+a[j+1]) return 1;
            }
        }
        return 0;
    }
};