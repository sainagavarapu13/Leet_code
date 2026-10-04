class Solution {
public:
    int solve(string s,vector<int>& v){
        int res = 0,a = 0;
        for(int i=0;i<s.size();i++){
            if(a==(s[i]-'0')){
                v.push_back(0);
                continue;
            }
            int b = s[i]-'0';
            if(b>a){
                int c= abs(b-a),d = 10-b+a;
                res += min(c,d);
                v.push_back(min(c,d));
                a = b;
            }
            else{
                int c = 10-a+b,d = abs(a-b);
                res += min(c,d);
                v.push_back(min(c,d));
                a = b;
            }
        }
        return res;
    }
    int minRotations(int n, string s) {
        vector<int> v;
        int o = solve(s,v);
        int res = o,d = -1;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[s.size()-1]) continue;
            int b,a;
            if(i==0) b = s[s.size()-1]-'0',a = 0;
            else b = s[s.size()-1]-'0',a = s[i-1]-'0';
            int c = abs(b-a);
            int e = min(c,10-c);
            int t = o-v[i]+e;
            res = min(res,t);
        }
        return res;
    }
};