class Solution {
public:
    int minRotations(string s) {
        int res = 0,a = 0;
        for(int i=0;i<s.size();i++){
            if(a==(s[i]-'0')) continue;
            int b = s[i]-'0';
            if(b>a){
                int c = abs(b-a),d = 10-b + a;
                res += min(c,d);
                a = b;
            }
            else{
                int c = 10-a + b,d = abs(a-b);
                res += min(c,d);
                a = b;
            }
        }
        return res;
    }
};