class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& a, int m, int n) {
        vector<vector<int>>ans;
        if(m*n!=a.size()) return ans;
        int i,j,k=0;
        vector<int>temp;
        for(i=0;i<a.size();i++){
           temp.push_back(a[i]);
           if(temp.size()==n){
            ans.push_back(temp);
            temp.clear();
           }
        }
        return ans;
    }
};