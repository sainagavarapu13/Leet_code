class Solution {
public:
   string fun(string s){
    if(s.size()==0) return s;
    int len = s[0]-'a';
    for (char &c : s) {
        c=(c-'a'-len+26)%26+'a';
    }
    return s;
}
    long long countPairs(vector<string>& a) {
        map<string,long long>m;
        for( auto s:a){
            m[fun(s)]++;
        }
        long long ans=0;
        for( auto [x,y]:m){
            ans+=y*(y-1)/2;
        }
        return ans;
    }
};
