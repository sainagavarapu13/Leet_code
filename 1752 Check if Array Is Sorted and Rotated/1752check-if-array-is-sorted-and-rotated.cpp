class Solution {
public:
    bool check(vector<int>& n) {
        int cnt=0;
        for( int i=1;i<n.size();i++){
            if( n[i-1] > n[i]) cnt++;
        }
        if( cnt == 0) return true;
        if( cnt ==1 && n[n.size()-1] <= n[0]) return true;
        return false;
    }
};