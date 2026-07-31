class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int c =0, d=0;
        string a;
        for( char i : s ){
            if( x==i) c++;
            else if( y ==i) d++;
           else a+=i;

        }
        return string (d,y)+ a+string(c,x);
    }
};