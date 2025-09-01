class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& a) {
        int sum=0;
        for( int i=0;i<a.size();i++){
            sort(a[i].begin(),a[i].end(), greater<>());

        }
        for( int i=0;i<a[0].size();i++){
            int m = 0;
            for( int j =0;j<a.size();j++){
                    m = max( a[j][i],m);
            }
            sum+=m;
        }
        return sum;
    }
};