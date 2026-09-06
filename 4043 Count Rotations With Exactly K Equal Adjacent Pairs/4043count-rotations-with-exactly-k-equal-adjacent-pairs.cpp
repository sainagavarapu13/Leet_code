class Solution {
public:
    int countRotations(string s, int k) {
        int n= s.size();
        int a =0;
        for( int i=0;i<n;i++){
            if(s[i]==s[(i+1)%n]) a++;
        }
        if(k==a) return n-a;
        if( k==a-1) return a;
        return 0;
    }
};