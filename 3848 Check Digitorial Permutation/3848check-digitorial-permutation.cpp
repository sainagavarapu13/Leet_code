class Solution {
public:
    int fact(int n){
        if(n==0||n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 6;
        if(n==4) return 24;
        if(n==5) return 120;
        if(n==6) return 720;
        if(n==7) return 5040;
        if(n==8) return 40320;
        if(n==9) return 362880;
        return -1;
    }
    bool isDigitorialPermutation(int n) {
       int to_equ=0;
        int m=n;
        while(m){
            to_equ+=fact(m%10);
            m/=10;
        }
        string given = to_string(n);
        string taken = to_string(to_equ);
        if(given.size()!=taken.size()) return false;
        sort(given.begin(),given.end());
        sort(taken.begin(),taken.end());
        for(int i=0;i<taken.size();i++){
            if(taken[i]!=given[i]) return false;
        }
        return true;
    }
};