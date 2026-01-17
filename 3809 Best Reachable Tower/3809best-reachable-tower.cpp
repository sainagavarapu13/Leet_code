class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> v;
        vector<int> res;
        int m = -1;
        for(int i=0;i<towers.size();i++){
            int a = abs(towers[i][0]-center[0])+ abs(towers[i][1]-center[1]);
            if(a<=radius){
                v.push_back(i);
                if(towers[i][2]>m){
                    m = towers[i][2];
                }
            }
        }
        if(m==-1) return {-1,-1};
        int a = INT_MAX,b = INT_MAX;
        for(int i=0;i<v.size();i++){
            if(m==towers[v[i]][2]){
                if(a>towers[v[i]][0]){
                    a = towers[v[i]][0];
                    b = towers[v[i]][1];
                }
                else if(a==towers[v[i]][0]){
                    if(b>towers[v[i]][1]){
                        a = towers[v[i]][0];
                        b = towers[v[i]][1];
                    }
                }
            }
        }
        return {a,b};
    }
};