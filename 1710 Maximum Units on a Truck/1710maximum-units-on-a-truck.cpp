class Solution {
public:
    int maximumUnits(vector<vector<int>>& a, int size) {
        int p=1;
        sort(a.begin(),a.end(),[p](auto& x,auto& y){
           return x[p]>y[p];
        });
        int sum=0,cnt=0;
        for(int i=0;i<a.size();i++){
            int k=a[i][0];
            while(size&&k--){
                sum+=a[i][1];
                size--;
            }
        }
        return sum;
    }
};