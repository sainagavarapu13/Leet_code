class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& a) {
        int i,j,k;
        double m=-1,area;
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                for(k=j+1;k<a.size();k++){
                    area= abs ( (a[i][0]*(a[j][1]-a[k][1]))+
                            (a[j][0]*(a[k][1]-a[i][1]))+
                            (a[k][0]*(a[i][1]-a[j][1])))/2.0;
                    m=max(area,m);
                }
            }
        }
        return m;
    }
};