class Solution {
public:
    int minCost(vector<int>& a, vector<int>& b) {
        unordered_map<int , int>m;
        for( int i : a) m[i]++;
        for( int i : b) m[i]--;
        int cost =0;
        for(auto [x,y] : m){
            if( abs(y)%2!=0) return -1;
            cost+=abs(y);
        }
        return cost/4;
    }
};