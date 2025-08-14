class Solution {
public:
    string largestOddNumber(string n) {
        int i;
        for(  i=n.size()-1 ;i>=0;i--){
            int k = n[i]-'0';
            if(k%2==1 ) return n.substr(0,i+1);
        }
        return "";
    }
};