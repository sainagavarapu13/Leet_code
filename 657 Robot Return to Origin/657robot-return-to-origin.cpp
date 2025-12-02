class Solution {
public:
    bool judgeCircle(string a) {
        int m=0,n=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='U'){
                m++;
            }
            if(a[i]=='D'){
                m--;
            }
            if(a[i]=='L'){
                n++;
            }
            if(a[i]=='R'){
                n--;
            }
        }
        if(m==0&&n==0)
        return 1;
        else return 0;
    }
};