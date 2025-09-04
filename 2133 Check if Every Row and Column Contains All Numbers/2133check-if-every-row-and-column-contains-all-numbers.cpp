class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        unordered_set<int> expected;
        for(int i = 1;i<=n;i++) expected.insert(i);
        for(int i=0;i<n;i++){
            unordered_set<int> rowset,colset;
            for(int j=0;j<n;j++){
                rowset.insert(matrix[i][j]);
                colset.insert(matrix[j][i]);
            }
            if(rowset != expected || colset != expected) return false;
        }
        return true;
    }
};