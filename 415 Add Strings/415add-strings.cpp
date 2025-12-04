class Solution {
public:
    string addStrings(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        int c=0,k;
        string s;
        while( i>=0 && j >=0){
             k = c+(a[i--]-'0')+(b[j--]-'0');
             cout << k << endl;
           
            s+=(k%10)+'0';
            c=k/10;
        }
        while( i >=0){
            k=c+(a[i--]-'0');
            s+=(k%10)+'0';
            c=k/10;
        } while( j>=0){
            k=c+(b[j--]-'0');
            s+=(k%10)+'0';
            c=k/10;
        }
        if(c!=0)s+=c+'0';
        reverse( s.begin(),s.end());
        return s;
    }
};