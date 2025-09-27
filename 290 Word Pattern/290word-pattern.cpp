class Solution {
public:
    bool wordPattern(string a, string s) {
       
        int i,j;
        vector<string>temp;
        string t;
        for(i=0;i<s.size();i++){
            if(s[i]==' ') continue;
            t.push_back(s[i]);
           if(i!=s.size()-1) {
            if(s[i+1]==' ') {
                temp.push_back(t);
                t.clear();
            }
           }
        }
        temp.push_back(t);
         if(a.size()!=temp.size()) return false;
        //for(auto& i:temp) cout<<i<<" ";
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                if(a[i]!=a[j]&&temp[i]==temp[j]) return 0;
                if(a[i]==a[j]){
                    if(temp[i]!=temp[j]) return 0;
                }
            }
        }
        return 1;
    }
};