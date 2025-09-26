class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size(),i,j;
        vector<int>idx;
        for( i=0;i<s.size();i++){
            if(s[i]==c){
                idx.push_back(i);
            }
        }
        vector<int>ans;
        int m=INT_MAX;
        for(i=0;i<s.size();i++){
            m=INT_MAX;
            for(j=0;j<idx.size();j++){
                m=min(m,abs(i-idx[j]));
            }
            ans.push_back(m);
        }
        return ans;
    }
};