class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        long long sum=0,m=LLONG_MAX;
        for(char i='a';i<='z';i++){
            sum=0;
            for(int j=0;j<cost.size();j++){
                if(s[j]!=i){
                    sum+=cost[j];
                }
            }
            m=min(sum,m);
        }
        return m;
    }
};