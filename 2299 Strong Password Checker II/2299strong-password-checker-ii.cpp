class Solution {
public:
    bool strongPasswordCheckerII(string a) {
        int len=a.size();
        if(len<8) return 0;
        int lower=0,upper=0,digit=0,spl=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>='a'&&a[i]<='z') lower=1;
            else if(a[i]>='A'&&a[i]<='Z') upper =1;
            else if(a[i]>='0'&&a[i]<='9') digit = 1;
            else spl=1;
            if(i!=0&&i!=a.size()-1){
                if(a[i]==a[i-1]||a[i]==a[i+1]) return 0;
            }
        }
        if(lower==0||upper==0||digit==0||spl==0) return 0;
        return 1;
    }
};