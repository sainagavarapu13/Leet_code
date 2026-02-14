class Solution {
public:
    int findLongestChain(vector<vector<int>>& a) {
        sort(a.begin(),a.end(),[](auto& x, auto& y){
            return x[1]<y[1];
        });
        int cnt=1;
        int k=a[0][1];
        for(int i=0;i<a.size();i++){
            if(k<a[i][0]) {cnt++;
            k=a[i][1];
            }

        }
        return cnt;
    }
};