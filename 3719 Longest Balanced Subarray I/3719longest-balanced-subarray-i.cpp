class Solution {
public:
    int fun(vector<int>& a){
        int ans =0;
        for( int i=0;i<a.size();i++){
            set<int>e,o;
            for( int j=i;j<a.size();j++){
                if( a[j]%2==0) e.insert(a[j]);
                else o.insert(a[j]);
                if( o.size()==e.size()){
                    ans = max( ans , j-i+1);
                }
            }
        }
        return ans;
    }
    int longestBalanced(vector<int>& nums) {
        return fun(nums);
    }
};