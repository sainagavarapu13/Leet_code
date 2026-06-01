class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int res = 0;
        for(int i=0;i<cost.size();i++){
            res += cost[i];
            i++;
            if(i<cost.size()) res += cost[i];
            i++;
        }
        return res;
    }
};