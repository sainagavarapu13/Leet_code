class Solution {
public:
    int countHillValley(vector<int>& n) {
        int x = n.size();
        vector<int>a;
        int cnt=0;
        for( int i=0;i<x;i++){
            if( a.empty() || a.back()!=n[i]) a.push_back(n[i]);
        }
        int y = a.size();
        for( int i=1;i<y-1;i++){
            if( a[i-1]>a[i] && a[i]<a[i+1]) cnt++;
            else if( a[i-1]<a[i] && a[i]>a[i+1]) cnt++;
        }
        return cnt;
    }
};