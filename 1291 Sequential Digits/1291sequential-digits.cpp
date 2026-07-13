class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<vector<int>> v(8,vector<int> (9,-1));
        long long a = 12,b = 100,e=8,res=12,c=11;
        for(int i=0;i<8;i++){
            for(int j=0;j<e;j++){
                v[i][j] = res;
                // cout<<v[i][j]<<" ";
                res += c;
            }
            // cout<<endl;
            e--;
            c +=b;
            a += c;
            b = b*10;
            res = a;
        }
        vector<int> p;
        e = 8;
        for(int i=0;i<8;i++){
            for(int j=0;j<=e;j++){
                if(v[i][j]>=low && v[i][j]<=high){
                    p.push_back(v[i][j]);
                }
            }
            e--;
        }
        return p;
    }
};