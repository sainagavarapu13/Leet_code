class Solution {
public:
    string reverseStr(string s, int k) {
        int i,j;
        for(i=0;i<s.size();i+=2*k){
            j=i+k;
            reverse(s.begin() + i, s.begin() + min(j, (int)s.size()));
        }
        return s;
    }
};