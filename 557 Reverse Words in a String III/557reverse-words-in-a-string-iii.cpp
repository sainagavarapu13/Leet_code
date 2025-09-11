class Solution {
public:
    string reverseWords(string s) {
        int i;
        string ans;
         string b;
        for(i=0;i<s.size();i++){
           
            if(s[i]==' '){
                reverse(b.begin(),b.end());
                ans+=b;
                ans+=' ';
                b.clear();
            }
            else{
                b+=s[i];
               
            }
        }
        reverse(b.begin(),b.end());
        ans+=b;
        return ans;
    }
};