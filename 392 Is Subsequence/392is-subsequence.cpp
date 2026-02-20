class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0;
        for(auto& i:t){
            if(k<s.size() && i == s[k]){
                k++;
            }
        }
        if(s.size()==k) return 1;
        else return 0;
    }
};