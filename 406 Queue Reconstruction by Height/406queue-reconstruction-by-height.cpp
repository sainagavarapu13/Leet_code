class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& a) {
        sort(a.begin(),a.end(),[](auto x, auto y){
            if(x[0]==y[0]) return x[1]<y[1];
            else return  x[0]>y[0];
        });
        vector<vector<int>>ans;
        for(int i=0;i<a.size();i++){
            ans.insert(ans.begin()+a[i][1] , a[i]);
        }
        return ans;
    }
};