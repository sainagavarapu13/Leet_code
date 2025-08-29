class Solution {
public:
    string compressedString(string s) {
        string b;
       int cnt =1,i;
       for(  i=1;i<s.size();i++){
            if( s[i]==s[i-1]){
                cnt++;
            }else{
                int k = cnt/9;
                while( k>0){
                    b+="9";
                    b+=s[i-1];
                    k--;
                }
                if( cnt%9 !=0){
                b+=(cnt%9)+'0';
                b+=s[i-1];}
                cnt=1;
            }
       }
         int k = cnt/9;
                while( k>0){
                    b+="9";
                    b+=s[i-1];
                    k--;
                }
                if( cnt%9 !=0){
                b+=(cnt%9)+'0';
                b+=s[i-1];}


        return b;
    }
};