class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& mat) {
        int n = mat.size()-1,m1 = mat[0].size()-1;
        map<int,vector<int>> m;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m1;j++){
                int a = i-j;
                m[a].push_back(mat[i][j]);
            }
        }
        for(auto &x:m){
            if(x.first<0){
                sort(x.second.rbegin(),x.second.rend());
            }
            else{
                sort(x.second.begin(),x.second.end());
            }
        }
        for(auto x:m){
            for(int i=0;i<x.second.size();i++){
                cout<<x.second[i]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m1;j++){
                int a = i-j;
                mat[i][j] = m[a].back();
                m[a].pop_back();
            }
        }
        return mat;
    }
};