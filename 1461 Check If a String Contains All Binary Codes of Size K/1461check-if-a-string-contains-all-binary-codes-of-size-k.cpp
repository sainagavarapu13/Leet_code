class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> a;
        int n = s.length(),i=0;
        while(i<n-k+1){
            string b = s.substr(i,k);
            a.insert(b);
            i++;
        }
        if(a.size()==pow(2,k)) return true;
        return false;
    }
};