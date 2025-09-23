class Solution {
public:
    string decodeMessage(string a, string b) {
        vector<int>f(2000);
        int i,k=0;
        vector<pair<char,char>>p;
        for(i=0;i<a.size();i++){
            if(a[i]==' ') continue;
            f[a[i]]++;
           if(f[a[i]]==1){
             p.push_back({a[i],k+'a'});
             k++;
           }
        }
        string ans;
       for(i=0;i<b.size();i++){
        if(b[i]==' ') ans.push_back(' ');
        for(auto& [n,c]:p){
            if(n==b[i]){
                ans.push_back(c);
            }
        }
       }
       return ans;
    }
};