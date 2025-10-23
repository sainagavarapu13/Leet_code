class Solution {
public:
    bool hasSameDigits(string s) {
        int i,k=0;
        int len=s.size();
        while(len>2){
            i=0;
            while(i<len-1){
            s[i]=((s[i]-'0'+s[i+1]-'0')%10)+'0';
            cout<<s[i]<<" ";
            i++;
            k++;
        }
        len--;
        }
        if(s[0]==s[1]) return 1;
        else return 0;
    }
};