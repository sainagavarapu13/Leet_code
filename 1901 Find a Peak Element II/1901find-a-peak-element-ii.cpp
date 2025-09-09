class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& a) {
        int n = a.size(); // number of rows
        int m = a[0].size(); // number of columns
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                bool isPeak = true;
               
                if (j > 0 && a[i][j] < a[i][j-1])
                    isPeak = false;
                
                if (j < m-1 && a[i][j] < a[i][j+1])
                    isPeak = false;
                
                if (i > 0 && a[i][j] < a[i-1][j])
                    isPeak = false;
                
                if (i < n-1 && a[i][j] < a[i+1][j])
                    isPeak = false;
                
                if (isPeak) {
                    return {i, j};
                }
            }
        }
        return {-1, -1}; 
    }
};