class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        for(auto& c:t){
            if(i<s.size()&&c==s[i]){
                i++;
            }
        }
        cout<<i;
        if(i==s.size()) return 1;
        else return 0;
    }
};