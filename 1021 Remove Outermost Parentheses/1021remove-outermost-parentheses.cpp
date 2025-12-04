class Solution {
public:
    string removeOuterParentheses(string s) {
        string a;
        int cnt=0;

        for( char i : s){
            if( i =='('){
                cnt++;
                if( cnt ==1) continue;
                else a+=i;

            }else{
                cnt--;
                if( cnt!=0) a+=i;
                
            }
        }
        return a;
    }
};