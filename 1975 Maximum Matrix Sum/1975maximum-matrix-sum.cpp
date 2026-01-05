class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size(),cnt=0,m=INT_MAX;
        long long sum =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int a = matrix[i][j];
                if(a<0){
                    cnt++;
                }
                sum +=abs(a);
                m = min(abs(a),m);
            }
        }
        if(cnt%2) return sum -2*m;
        return sum;
    }
};