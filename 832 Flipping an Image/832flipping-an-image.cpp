class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size()-1;
        vector<vector<int>> m(n+1,vector<int>(n+1,0));
        for(int i=0;i<=n;i++){
            int b=0;
            for(int j=n;j>=0;j--)
            if(image[i][j]==0){
                m[i][b] = 1;
                b++;
            }
            else{
                m[i][b] = 0;
                b++;
            }
            }
            return m;
        }
};