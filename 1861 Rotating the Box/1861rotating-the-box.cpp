class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& b) {
        int n = b.size(),m = b[0].size();
        vector<vector<char>> v(m,vector<char> (n,'.'));
        int a = 0;
        for(int i=n-1;i>=0;i--){
            int c = m-1;
            for(int j=m-1;j>=0;j--){
                if(b[i][j]=='#'){
                    v[c][a] = '#';
                    c--;
                }
                else if(b[i][j]=='*'){
                    v[j][n-i-1] = '*';
                    c = j;
                    c--;
                }
            }
            a++;
        }
        return v;
    }
};