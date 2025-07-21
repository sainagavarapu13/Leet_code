class Solution {
public:
    bool isAcronym(vector<string>& w, string s) {
        string res;
        for( int i=0;i<w.size();i++){
            res.push_back(w[i][0]);
        }
        if( res==s) return true;
        else return false;
    }
};