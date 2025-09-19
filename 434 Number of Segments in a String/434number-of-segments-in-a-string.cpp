class Solution {
public:
    int countSegments(string s) {
        int cnt=0,i,k=0;
        while(k<s.size()&&s[k]==' ') k++;
         if(k==s.size()) return 0;
        if(k==0) k+=1;
       
        for(i=k;i<s.size();i++){
            if(s[i]==' '&&s[i-1]!=' '){
                cnt++;
            }
        }
        if(s.back()!=' ') cnt++;
        if(s==" "||s=="") return 0;
        return cnt;
    }
};