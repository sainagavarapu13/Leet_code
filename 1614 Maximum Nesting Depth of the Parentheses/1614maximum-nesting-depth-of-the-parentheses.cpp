class Solution {
public:
    int maxDepth(string s) {
        string a;
        int cnt=0;
        int m = 0;

        for( char i : s){
            if( i =='('){
                cnt++;
                if( cnt ==1) continue;
                else a+=i;

            }else if(i==')'){
                m = max( m , cnt);
                cnt--;
                if( cnt!=0) a+=i;
                
            }
        
        }
        return m;
    }
};