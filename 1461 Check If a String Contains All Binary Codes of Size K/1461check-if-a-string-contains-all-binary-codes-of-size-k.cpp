class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        set<string>set;
        int strings = n-k+1;
        if(strings <  (1 << k)) return false;
        for(int i=0;i<=s.size()-k;i++){
            set.insert(s.substr(i,k));
        }
        return set.size()== (1 << k);
    }
};