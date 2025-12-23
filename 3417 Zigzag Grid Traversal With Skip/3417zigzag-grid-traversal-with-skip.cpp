class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& a) {
        int i,j;
        vector<int>ans;
        int cnt=0;
        for(i=0;i<a.size();i++){
            if(i%2==0){
        for(j=0;j<a[0].size();j++){
            
            if(cnt%2==0) ans.push_back(a[i][j]);
            cnt++;
        }}else{
            for(j=a[0].size()-1;j>=0;j--){
                if(cnt%2==0) ans.push_back(a[i][j]);
                cnt++;
            }}
        }
        return ans;
    }
};