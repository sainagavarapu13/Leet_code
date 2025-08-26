class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        float maxi =0;
        int area = 0;
        for( int i=0;i<d.size();i++){
            int a= d[i][0] , b = d[i][1];
            float dia = sqrt( a*a + b*b);
            if( maxi < dia){
                maxi = dia;
                area = a*b;
            }else if( maxi == dia){
                area = max( area , a*b);
            }
        }
        return area;
    }
};