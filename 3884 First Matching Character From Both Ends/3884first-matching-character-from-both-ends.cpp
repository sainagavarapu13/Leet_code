class Solution {
public:
    int firstMatchingIndex(string s) {
        int idx=-1;
        int n= s.size();
        for(int i=0;i<s.size();i++){
            int ch=n-i-1;
            if(n-i-1>=0 && n-i-1<n){
                if(s[ch]==s[i]){
                    return i;
                }
            }
        }
        return -1;
    }
};