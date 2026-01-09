class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v(s.length(),s.length()+1);
        int a=0;
        for(int  i=0;i<s.length();i++){
            if(s[i]==c){
                a = i;
                v[i]=0;
                break;
            }
        }
        while(1){
            int b = a+1,d = a-1>0 ? a-1:0;
            while(s[b]!=c && b<s.length()){
                int r = b-a;
                if(v[b]>r){
                    v[b] = r;
                }
                else{
                    break;
                }
                b++;
            }
            while(s[d]!=c){
                int r = a - d;
                // cout<<d<<endl;
                if(v[d]>r){
                    v[d] = r;
                }
                else{
                    break;
                }
                if(d==0) break;
                d--;
            }
            if(s[b]==c){
                v[b] = 0;
                a = b;
            }
            if(b==s.length()) break;
        }
        return v;
    }
};