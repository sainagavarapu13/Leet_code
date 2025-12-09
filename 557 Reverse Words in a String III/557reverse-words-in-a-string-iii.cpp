class Solution {
public:
    string reverseWords(string s) {
        int n = s.length(),a=0;
        for(int i=0;i<n;i++){
            if(s[i]==' ' || i==n-1){
                               if(i==n-1) i++;
                reverse(s.begin()+a,s.begin()+i);
                if(i==n-1) return s;
                a = i+1;
            }
        }
        return s;
    }
};