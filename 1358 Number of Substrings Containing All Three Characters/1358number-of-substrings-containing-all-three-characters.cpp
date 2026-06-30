class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int>m;
        int n=s.size();
        int start=0,end=0,cnt=0;
        while(end<s.size()){
            m[s[end]]++;
            while(m['a']>0&&m['b']>0&&m['c']>0){
                cnt+=n-end;
                m[s[start]]--;
                start++;
            }
            end++;
        }
        return cnt;
    }
};