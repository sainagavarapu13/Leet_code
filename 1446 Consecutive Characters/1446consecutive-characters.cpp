class Solution {
public:
    int maxPower(string s) {\
    if(s.length()==0) return 0;
        int a = 1;
        int res = 1;
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
                a++;
                res = max(a,res);
            }
            else{
                a = 1;
            }
        }
        return res;
    }
};