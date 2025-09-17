class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> v;
        for(auto p:points){
            v.push_back(p[0]);
        }
        sort(v.begin(),v.end());
        int  m =0;
        for(int i=0;i<v.size()-1;i++){
            int b = v[i+1]-v[i];
             m = max(m,b);
        }
        return m;
    }
};