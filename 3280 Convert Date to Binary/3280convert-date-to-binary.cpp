class Solution {
public:
    string convertDateToBinary(string a) {
        string res;
        int k=0;
        for( int i=0;i<a.size();i++){
            if( isdigit(a[i])){
                k = k*10+(a[i]-'0');
            }else{
                string b;
                while( k){
                    b+=(k%2==0)?'0':'1';
                    k/=2;
                    
                }
                reverse(b.begin(),b.end());
                res+=b;
                res+='-';
            }
        }
         string b;
                while( k){
                    b+=(k%2==0)?'0':'1';
                    k/=2;
                    
                }
                reverse(b.begin(),b.end());
                res+=b;

        return res;
    }
};