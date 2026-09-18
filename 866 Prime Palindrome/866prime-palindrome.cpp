class Solution {
public:
    bool isprime(int n){
        if(n==0||n==1) return 0;
        if(n==2) return 1;
        if(n%2==0) return 0;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return 0;
        }
        return 1;
    }
    bool ispalin(int n){
        string s = to_string(n);
        string t = s;
        reverse(t.begin(),t.end());
        return t==s;
    }
    int primePalindrome(int n) {
        for( int i =n;;i++){
            if(isprime(i) && ispalin(i)){
                return i;
            }
            if (1e7 < i && i < 1e8)
                i = 1e8;
        }
        return -1;
    }
};