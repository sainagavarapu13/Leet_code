class Solution {
public:
    string addBinary(string a, string b) {
        if( a.size()==1 && a[0]=='0' && b.size()==1 && b[0]=='0') return "0";
        vector<int>n;
        int i;
        reverse( a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(  i=0;i<(min(a.size(),b.size()));i++){
            int x=a[i]-'0' , y = b[i]-'0';
            n.push_back(x+y);
        }
        while(i<a.size()){
            n.push_back(a[i]-'0');
            i++;
        }while(i<b.size()){
            n.push_back(b[i]-'0');
            i++;
        }
        for( int i=1;i<n.size();i++){
            n[i]+= n[i-1]/2;
            n[i-1]%=2;
            
        }
        if( n[n.size()-1]!=1){
            n.push_back(n[n.size()-1]/2);
            n[n.size()-2]%=2;
        }
        string c;
        for( int i=n.size()-1;i>=0;i--){
            c+=n[i]+'0';
        }
        return c;
    }
};