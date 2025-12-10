class Solution {
    string s = "";
public:
    string convertToTitle(int c) {
        while(c){
            c--;
            int a = c%26;
            s += ('A' + a);
            c /=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};