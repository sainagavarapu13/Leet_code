class Solution {
public:
    string removeDigit(string a, char d) {
        string m= "0";
        for( int i=0;i<a.size();i++){
            if( a[i]==d){
                string b;
                b+=a.substr(0,i);
                b+=a.substr(i+1,a.size());
                m = max( b, m);
            }
        }
        return m;
    }
};