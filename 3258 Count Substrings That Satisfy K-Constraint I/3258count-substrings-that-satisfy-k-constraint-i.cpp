class Solution {
public:
    int countKConstraintSubstrings(string s, int K) {
        int cnt=0,o=0,z=0;
        for(int i=0;i<s.size();i++){
                z=0,o=0;
                for(int k=i;k<s.size();k++){
                    if(s[k]=='1') o++;
                    else z++;
                   if(o<=K||z<=K) cnt++;
                }
        }
        return cnt;
    }
};