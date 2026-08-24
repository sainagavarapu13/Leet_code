class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& a) {
        map<int,vector<int>>m;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                m[i+j].push_back(a[i][j]);
            }
        }
        int i;
        vector<int>ans;
        for(i=0;i<m.size();i++){
            vector<int>c=m[i];
            if(i%2==0){
                for(int j=c.size()-1;j>=0;j--) ans.push_back(c[j]);
            }
            else{
                for(int j=0;j<c.size();j++) ans.push_back(c[j]);
            }
        }
        return ans;
    }
};