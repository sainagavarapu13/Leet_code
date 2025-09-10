class Solution {
public:
    bool canConstruct(string r, string m) {
        map<char,int>a;
        map<char,int>n;
        for(int i=0;i<m.size();i++){
            a[m[i]]++;
        }
        for(int i=0;i<r.size();i++){
            n[r[i]]++;
        }
        for(auto &[ch,freq] : n){
            if(a[ch]<freq) return false;
        }
        return true;
    }
};