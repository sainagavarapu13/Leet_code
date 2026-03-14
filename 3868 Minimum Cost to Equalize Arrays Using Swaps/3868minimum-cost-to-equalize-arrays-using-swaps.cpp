class Solution {
public:
    int minCost(vector<int>& a, vector<int>& b) {
        map<int,int>m1;
       
        for(auto& i:a){
            m1[i]++;
        }
        for(auto& i:b){
            m1[i]--;
        }
       int cost =0;
        for(auto& [n,c]:m1){
            if(abs(c) % 2!=0) return -1;
            cost+=abs(c);
        }
        return cost/4;
    }
};