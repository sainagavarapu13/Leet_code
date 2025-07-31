class Solution {
public:
    int maxIceCream(vector<int>& a, int b) {
        sort(a.begin(),a.end());
        if( a[0]>b) return 0;
        int cnt=0,size=0;
        for( int i:a){
            size+=i;
            if( size>b) break;
            else{
                cnt++;
            }
        }
        return cnt;
    }
};