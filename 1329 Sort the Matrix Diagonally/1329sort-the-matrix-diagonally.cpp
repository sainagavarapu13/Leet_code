class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size()-1,m = mat[0].size()-1;
        int i=0,j=m;
        while(j>=0){
            vector<int> v;
            int a = i,b = j,c=0;
            while(a<=n && b<=m){
                v.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(v.begin(),v.end());
            a = i,b = j;
            while(a<=n && b<=m){
                mat[a][b] = v[c++];
                a++;
                b++;
            }
            j--;
        }
        while(i<=n){
            vector<int> v;
            int a = i,b = 0,c=0;
            while(a<=n && b<=m){
                v.push_back(mat[a][b]);
                a++;
                b++;
            }
            sort(v.begin(),v.end());
            a = i,b=0;
            while(a<=n && b<=m){
                mat[a][b] = v[c++];
                    a++;
                    b++;
            }
            i++;
        }
        return mat;
    }
};