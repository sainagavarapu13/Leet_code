class Solution {
public:
    int maximumPopulation(vector<vector<int>>& a) {
        vector<int>p(2051,0);
        for( auto i : a){
            p[i[0]]++;
            p[i[1]]--;
        }
        int o=0;
        int m =0 , ans =0;
        for( int i =0;i<p.size();i++){
            o+=p[i];
            if( o > m){
                m = o;
                ans=i;
            }
        }
        return ans;
    }
};