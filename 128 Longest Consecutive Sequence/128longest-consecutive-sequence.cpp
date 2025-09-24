class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        if( a.size() ==0) return 0;
        sort(a.begin(),a.end());
        int cnt=0;
        vector<int>b;
        for(int i=1;i<a.size();i++){
            if( abs(a[i]-a[i-1])==1) cnt++;
            else if( a[i]==a[i-1]) continue;
            else {b.push_back(cnt+1);
            cnt=0;}
        }
        b.push_back(cnt+1);
        int ma = b[0];
        for( int i : b){
            ma = max( ma , i);
        }
        return ma;
    }
};