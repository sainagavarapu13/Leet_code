class Solution {
public:
    int numSpecial(vector<vector<int>>& a) {
        vector<int>x(a.size(),0),y( a[0].size(),0);
        for( int i=0;i<a.size();i++)
        {
            for( int j=0;j<a[0].size();j++){
                if(a[i][j]==1){x[i]++;
                y[j]++;}

            }
        }
        int cnt=0;
        for( int i=0;i<a.size();i++){
            for( int j =0;j<a[0].size();j++){
                if(a[i][j]==1 && x[i]==1 && y[j]==1) cnt++;
            }
        }
        return cnt;
    }
};