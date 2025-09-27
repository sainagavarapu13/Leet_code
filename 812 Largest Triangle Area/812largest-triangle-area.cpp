class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& a) {
        double area ,ma=0;
        for(int i=0;i<a.size()-2;i++){
            for( int j =i+1;j<a.size()-1;j++){
                for( int k = j+1;k<a.size();k++){
                    area = abs((0.5*(a[i][0]*(a[k][1]-a[j][1])+a[j][0]*(a[i][1]-a[k][1])+a[k][0]*(a[j][1]-a[i][1]))));
                    ma = max( ma , area);
                }
            }
        }
        return ma;
        
    }
};