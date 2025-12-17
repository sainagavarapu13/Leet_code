class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        for(auto& i:s){
            m[i]++;
        }
        vector<int>ans;
        for(auto& [n,c]:m){
            ans.push_back(c);
        }
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=ans[i-1]) return false;
        }
        return true;
    }
};