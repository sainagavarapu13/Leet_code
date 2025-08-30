class Solution {
public:
    int firstCompleteIndex(vector<int>& a, vector<vector<int>>& m) {
        int r = m.size();
        int c = m[0].size();
        map<int , int >row_i, col_i;
        for( int i=0;i<r;i++){
            for( int j=0;j<c;j++){
                row_i[m[i][j]]=i;
                col_i[m[i][j]]=j;
            }
        }
        vector<int>row(r,0);
        vector<int>col(c,0);
        int k=0;
        for( int i:a){
            row[row_i[i]]++;
            col[col_i[i]]++;
            if( row[row_i[i]]==c ||col[col_i[i]]==r ) return k;
            k++;
        }
        return 0;
    }
};