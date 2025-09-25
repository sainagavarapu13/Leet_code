class Solution {
public:
    int longestContinuousSubstring(string s) {
        int a=1,b=1;
        for(int i=1;i<s.size();i++){
            if((s[i]-s[i-1])==1){
                b++;
            }
            else{
                b = 1;
            }
            a = max(a,b);
        }
        return a;
    }
};