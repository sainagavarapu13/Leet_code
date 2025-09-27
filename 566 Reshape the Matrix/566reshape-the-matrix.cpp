class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& a, int r, int c) {
        int n=a.size();
        int m=a[0].size();
        if(r*c!=n*m) return a;
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                temp.push_back(a[i][j]);
                if(temp.size()==c){
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }
        return ans;
    }
};