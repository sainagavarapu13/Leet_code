class Solution {
public:
    string getSmallestString(string s) {
        for(int i=1;i<s.size();i++){
            int l=s[i]-'0';
            int m=s[i-1]-'0';
            if(((l%2)==(m%2))&&l<m){
                swap(s[i],s[i-1]);
                break;
            }
        }
        return s;
    }  

};