class Solution {
public:
    string convert(string a, int r) {
        if( r==1) return a;
        string b;
        int jump = (2*r)-2;
        int f= jump;
        int s =0;
        for( int j =0;j<r;j++){
           int i=j;
           if( j==0 || j==r-1){
            while( i < a.size()){
                    b+=a[i];
                    i+=max( f,s);
                }
           }else{
             bool flage =false;
              while( i < a.size()){
                    if(!flage){
                         b+=a[i];
                        i+=f;
                        flage = true;
                    }else{
                        b+=a[i];
                        i+=s;
                        flage = false;
                     }
                }
           }
           f-=2;
           s+=2;
        } 
        return b;
    }
};