class Solution {
public:
    string change(string s){
        int a = 0;
        // cout<<s<<endl;
        int n = s.length()-1;
        s[n] = '0';
        a = 1;
        for(int i = s.length()-2;i>=0;i--){
            if(s[i]=='0'){
                s[i] = '1';
                a = 0;
                break;
            }
            s[i] = '0';
        }
        if(a==1) s = "1"+s;
        // cout<<"-"<<s<<endl;
        return s;
    }
    int numSteps(string s) {
        int res = 0;
        while(s.length()>1){
            while(s[s.length()-1]=='0'){
                s.pop_back();
                res++;
            }
            if(s.length()>1 && s[s.length()-1]=='1'){
                s = change(s);
                res++;
            }
            // cout<<s<<endl;
        }
        if(s.length()==1 && s[0]=='0') res++;
        return res;
    }
};