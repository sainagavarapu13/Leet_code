class Solution {
public:
    int longestDecomposition(string s) {
        int i=0,j = s.size()-1;
        int cnt=0;
        string t ="";
        string p ="";
        while( i<j){
            p+=s[i];
            t+=s[j];
            string l = t;
            reverse(l.begin(),l.end());
            if( p == l){
                cnt+=2;
                t="";
                p="";

            }
            i++;
            j--;
        }
        if( i==j||t!="") cnt++;
        return cnt;
    }
};