class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int a = INT_MAX,b = -1,n= drones.size();
        for(int i=0;i<n;i++){
            int c = abs(drones[i][0]-target[0]) +  abs(drones[i][1]-target[1]);
            // cout<<c<<" "<<drones[i][2];
            if(c>drones[i][2]) continue;
            if(a>c){
                a = c;
                b = i;
            }
        }
        return b;
    }
};