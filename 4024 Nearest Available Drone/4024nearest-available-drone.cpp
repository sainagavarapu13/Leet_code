class Solution {
public:
    int nearestDrone(vector<vector<int>>& d, vector<int>& t) {
        int mini = INT_MAX;
        int ind =-1;
        int k=0;
        for( auto i : d){
            int dis = abs(abs(i[0]-t[0])+abs(i[1]-t[1]));
            if( dis <=i[2]){
                if( mini >dis){
                    mini = dis;
                    ind =k;
                }
            }
            k++;
        }
        return ind;
    }
};