class Solution {
public:
    bool prime(int n){
        if( n<2) return 0;
        if(n==2||n==3||n==5) return 1;
        if(n%2==0) return 0;
        for( int i=3;i*i<=n;i+=2){
            if(n%i==0) return 0;

        }
        return 1;
    }
    int make(int n){
        string a = to_string(n);
        string s = to_string(n);
        s.pop_back();
        reverse(s.begin(), s.end());
        a+=s;
        int k = stoi(a);
        return k;
    }
    int primePalindrome(int n) {
        if(n<=2) return 2;
        if(n<=3) return 3;
        if( n<=5) return 5;
        if(n<=7) return 7;
        if(n<=11) return 11;
        int ans=0;
        for( int i=1;;i++){
            int pre = make(i);
            if( pre>=n && prime(pre)){
                ans = pre;
                break;
            }
        }
        return ans;
    }
};