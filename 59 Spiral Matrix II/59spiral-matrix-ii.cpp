class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<int>a;
        for( int i=0;i<n*n;i++){
            a.push_back(i+1);
        }
        vector<vector<int>>res(n, vector<int>(n));
        int t=0,b=n-1,r=n-1,l=0;
        int k=0;
        while( t<=b && l <=r){
            for( int i=l;i<=r;i++){
                res[t][i]=a[k++];
            }
            t++;
            for(int i=t;i<=b;i++){
                res[i][r]=a[k++];
            }
            r--;
            if( t<=b){
                for( int i =r;i>=l;i--){
                    res[b][i]=a[k++];
                }
                b--;
            }
            if( l<=r){
                for( int i =b ;i>=t;i--){
                    res[i][l]=a[k++];
                }
                l++;
            }

        }
        return res;
        
    }
};