class Solution {
public:
    long long minCost(string a, vector<int>& b) {
        map<char, long long>m;
        long long total =0;
        for( int i=0;i<a.size();i++){
            m[a[i]]+=b[i];
            total+=b[i];
        } 
        long long ma =0;
        for(auto[x,y]:m ){
            ma = max( ma , y);
        }
        return total-ma;
    }
};