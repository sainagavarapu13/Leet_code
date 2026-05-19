class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string>se;
        unordered_set<string>res;
        for( int i=0;i+9<s.size();i++){
            string a = s.substr(i,10);
            if( se.count(a)){
                res.insert(a);
            }
            se.insert(a);
        }
        vector<string>ans(res.begin(),res.end());
        
        return ans;
    }
};