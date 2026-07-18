class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
       map<string, vector<string>>m;
       for(auto s :a){
        string i = s;
        sort(i.begin() , i.end());
        m[i].push_back(s);

       }
       vector<vector<string>>ns;
        for( auto[x,y]:m){
            ns.push_back(y);
        }
        return ns;
    }
};