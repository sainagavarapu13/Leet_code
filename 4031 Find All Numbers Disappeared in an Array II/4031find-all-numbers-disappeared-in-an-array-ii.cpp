class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& n, int l, int u) {
        sort(n.begin(), n.end());
        vector<vector<int>>ans;
        long long pre = (long long)l-1;
        for( int x : n){
            if( x<l) continue;
            if( x>u) break;
            if( x-pre>=2){
                ans.push_back({(int)pre+1, (int)x-1});
               
            }
             pre = x;
        }
        if( u - pre >=1){
             ans.push_back({(int)pre+1, (int)u});
        }
        return ans;
    }
};