class Solution {
    void left(vector<vector<int>>& g , int s ,int e){
        int i =s , j = e;
        vector<int>a,b;
            while(i<g.size() && j<g.size()){
                a.push_back(g[i][j]);
                b.push_back(g[j][i]);
                i++;
                j++;
            }
            sort(a.begin(),a.end());
            sort(b.begin(),b.end(),greater<>());
            int k =0;
            i =s , j = e;
            while(i<g.size() && j<g.size()){
                g[i][j] = a[k];
                g[j][i] = b[k];
                i++;
                j++;
                k++;
            }
    }
    void mid(vector<vector<int>>& g , int s ,int e){
        int i =s , j = e;
        vector<int>a,b;
            while(i<g.size() && j<g.size()){
                a.push_back(g[i][j]);
                i++;
                j++;
            }
            sort(a.begin(),a.end(),greater<>());
            int k =0;
            i =s , j = e;
            while(i<g.size() && j<g.size()){
                g[i][j] = a[k];
                i++;
                j++;
                k++;
            }
    }
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& g) {
        mid( g,0,0);
        for( int j =1;j<g.size();j++){
            int i=0;
            left(g,i,j);

        }
        return g;
    }
};