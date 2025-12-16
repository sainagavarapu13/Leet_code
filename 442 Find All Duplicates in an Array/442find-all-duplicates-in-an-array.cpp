class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        map<int,int>mp;
        for( int i : a){
            mp[i]++;
        }
        vector<int>ans;
        for( auto[x,y]:mp ){
            if( y==2)ans.push_back(x);
        }
        return ans;
    }
};