class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> v(26);
        int n = s.length(),res = 0;
        for(int i=0;i<n;i++){
            v[s[i]-'a'].push_back(i);
        }
        for(int i=0;i<words.size();i++){
            int a = -1,x = 0;
            for(int j = 0;j<words[i].size();j++){
                auto &pos = v[words[i][j]-'a'];
                auto it=upper_bound(pos.begin(),pos.end(),a);
                if(it==pos.end()) {
                    x= 1;
                    break;
                }
                a = *it;
            }
            if(x==0) res++;
        }
        return res;
    }
};