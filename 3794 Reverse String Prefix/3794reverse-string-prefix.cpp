class Solution {
public:
    string reversePrefix(string s, int k) {
        int i=0;
        if(k<=1 || s.length()<k) return s;
            string a="";
            for(int j=i;j<i+k;j++){
                a+=s[j];
            }
            reverse(a.begin(),a.end());
            int b=0;
            for(int j=i;j<i+k;j++){
                s[j] = a[b++];
            }
        return s;
    }
};