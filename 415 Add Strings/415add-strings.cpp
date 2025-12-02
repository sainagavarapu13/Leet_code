class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1,j=num2.length()-1;
        int c = 0;
        string v = "";
        for(i,j;i>=0 && j>=0;i--,j--){
            int a = num1[i]-'0';
            int b = num2[j]-'0';
            int d = a+b+c;
            c = d/10;
            char e = (d%10)+'0';
           v = v + e;
        }
        for(i;i>=0;i--){
            int a = num1[i]-'0' + c;
            c = a/10;
             char e = (a%10) + '0';
            v  = v + e;
        }
        for(j;j>=0;j--){
            int a = num2[j]-'0' + c;
            c = a/10;
           char e = (a%10) + '0';
           v = v+e;
        }
        char e = c + '0';
        if(c!=0) v  = v + e;
        reverse(v.begin(),v.end());
        return v;
    }
};