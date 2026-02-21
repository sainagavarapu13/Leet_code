class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = travel.size();
        vector<int> v(n+1,0);
        for(int i=0;i<n;i++){
            v[i+1] = v[i]+travel[i];
        }
        int m = 0,p=0,g = 0,im=0,ip=0,ig=0;
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='M'){
                    m++;
                    im = i;
                }
                else if(garbage[i][j]=='P'){
                    p++;
                    ip = i;
                }
                else if(garbage[i][j]=='G'){
                    g++;
                    ig = i;
                }
            }
        }
        int res = m+p+g+v[im]+v[ip]+v[ig];
        return res;
    }
};