class Solution {
public:
    string getHint(string a, string b) {
        int same=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                same++;
                a[i]='&';
                b[i]='&';
            }
        }
        map<char,int>m1,m2;
        for(auto& i:a){
            m1[i]++;
        }
        for(auto& i:b){
            m2[i]++;
        }
        int cnt=0;
        for(auto& [n,c]:m1){
            if(n=='&') continue;
            cnt+=min(c,m2[n]);
         
        }
        string ans;
        ans+=to_string(same);
        ans+='A';
        ans+=to_string(cnt);
        ans+='B';
        return ans;
    }
};