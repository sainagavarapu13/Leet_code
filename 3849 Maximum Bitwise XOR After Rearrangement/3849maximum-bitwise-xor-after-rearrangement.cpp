class Solution {
public:
    string maximumXor(string s, string t) {
       int one=0,zero=0;
        for(auto& i:t){
            if(i=='0') zero++;
            else one++;
        }
        string modi="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(zero>0){
                    modi+='0';
                    zero--;
                }
                else if(one>0){
                    modi+='1';
                     one--;
                }
            }
            else{
                if(one>0){
                    modi+='1';
                    one--;
                }
                else if(zero>0){
                    modi+='0';
                     zero--;
                }
            }
        }
        string ans="";
        for(int i=0;i<modi.size();i++){
            if(modi[i]==s[i]){
                ans+='0';
            }
            else{
                ans+='1';
            }
        }
        return ans;
    }
};