class Solution {
public:
    int myAtoi(string s) {
        long long num = 0,a = 1,i=0,n = s.length();
        for(i;i<n;i++)
            if(s[i]==' ')continue;
            else break;
        if(n>0 && s[i]=='+' || s[i]=='-'){
            if(s[i]=='+') a=1;
            else a = -1;
            i++;
        }
        for(i;i<n;i++){
            if(s[i]==' ') break;
            if(s[i]>='0' && s[i]<='9'){
                num = num*10+(s[i]-'0');
                if(num>2147483647){
                    return (2147483648 + (a==1 ? -1: 0))*a; 
                }
            }
            else{
                break;
            }
        }
        return (int)num*a;
    }
};