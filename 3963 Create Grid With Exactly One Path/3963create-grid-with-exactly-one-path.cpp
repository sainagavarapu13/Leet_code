class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans(m,string(n,'#'));
        int i=0,j=0;
        while(i<m){
            ans[i][0]='.';
            i++;
        }
        i--;
        while(j<n){
            ans[i][j]='.';
            j++;
        }
        return ans;
    }
};