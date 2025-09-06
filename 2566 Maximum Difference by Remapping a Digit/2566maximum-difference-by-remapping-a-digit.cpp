class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        char ma ,mi;
        for( char i : s){
            if(i!='0'){
                mi = i;
                break;
            }
        }for( char i : s){
            if(i!='9'){
                ma = i;
                break;
            }
        }
        int k =0;
        for( int i=0;i<s.size();i++){
            int x = s[i]-'0';
            int y = s[i]-'0';
            if( s[i]== ma) x=9;
            if( s[i]==mi) y =0;
            k = k*10 +(x-y);
        }
        return k;
    }
};