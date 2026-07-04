class Solution {
public:
    int minOperations(string s1, string s2) {
        int res = 0,n = s1.size();
        for(int i=0;i<s1.length();i++){
            if(s1[i]==s2[i]) continue;
            else if(s1[i]=='0'){
                 res++;
                s1[i] = '1';
            }
            else if(i+1<n && s1[i]=='1' && s1[i+1]=='1'){
                res++;
                s1[i+1] = '0';
            }
            else if(i+1<n && s1[i]=='1' && s1[i+1]=='0'){
                res++;
                res++;
            }
            else if(i>0 && s1[i-1]=='1'){
                res++;
                res++;
            }
            else if(i>0 && s1[i-1]=='0'){
                res++;
                res++;
            }
            else{
                return -1;
            }
        }
        return res;
    }
};