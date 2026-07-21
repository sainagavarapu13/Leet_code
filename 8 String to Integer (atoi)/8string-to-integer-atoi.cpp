class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign = 1;
        while(i<s.size()&&s[i]==' ') i++;
        if(i>=s.size()) return 0;
        if(s[i]=='-') {sign=0;i++;}
        else if(s[i]=='+') i++;
        long long sum=0;
        for(int j=i;j<s.size();j++){
            if(s[j]>='0'&&s[j]<='9'){
                sum=sum*10+(s[j]-'0');
                if(sum>INT_MAX){
                   if(sign) return INT_MAX;
                   else return INT_MIN;
                }
                if(sum<INT_MIN){
                    return INT_MIN;
                }
            }
            else {
                break;
            }
        }
        if(sign==0) return (int)-1*sum;
        return (int)sum;
    }
};