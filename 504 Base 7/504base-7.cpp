class Solution {
public:
    string convertToBase7(int n) {
        if( n ==0) return "0";
        string s;
        int f=0;
        if( n <0){
            n=abs(n);
            f=1;
        }
        while( n){
            s.push_back((n%7)+'0');
            n/=7;
        }
        reverse(s.begin(),s.end());
        if( f==1){
            s.insert(s.begin(),'-');
        }
        return s;
    }
};