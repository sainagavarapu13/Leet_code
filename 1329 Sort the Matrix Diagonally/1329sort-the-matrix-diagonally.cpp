class Solution {
public:
     void right(vector<vector<int>>& g , int s ,int e){
        int i =s , j = e;
        vector<int>a;
            while(i<g.size() && j<g[0].size()){
                a.push_back(g[i][j]);
                i++;
                j++;
            }
            sort(a.begin(),a.end());
            int k =0;
            i =s , j = e;
            while(i<g.size() && j<g[0].size()){
                g[i][j] = a[k];
                i++;
                j++;
                k++;
            }
    }
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& g) {
        for( int j =0;j<g[0].size();j++){
            int i=0;
            right(g,i,j);

        } for( int i =0;i<g.size();i++){
            int j=0;
            right(g,i,j);

        }
        return g;
    }
};