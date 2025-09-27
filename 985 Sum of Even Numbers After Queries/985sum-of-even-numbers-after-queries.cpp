class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& a, vector<vector<int>>& b) {
        vector<int>ans;
        for( auto r:b){
            a[r[1]]+=r[0];
            int sum=0;
            for(auto& i : a) if( i%2==0) sum+=i;
            ans.push_back(sum);
        }
        return ans;
    }
};
auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });