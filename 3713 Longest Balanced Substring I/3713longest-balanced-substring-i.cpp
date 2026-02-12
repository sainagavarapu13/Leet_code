class Solution {
public:
    int longestBalanced(string s) {
        int res = 0;
        for(int i=0;i<s.length();i++){
            vector<int> v(26,0);
            for(int j=i;j<s.length();j++){
                v[s[j]-'a']++;
                int b = v[s[i]-'a'];
                    int c = 1;
                    for(auto x:v){
                        if(x>0 && x!=b){
                            c = 0;
                            break;
                        }
                    }
                    if(c==1) res = max(res,j-i+1);
            }
        }
        return res;
    }
};