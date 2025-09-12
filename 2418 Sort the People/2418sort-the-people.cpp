class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>> m;
        for(int i=0;i<names.size();i++){
            m[heights[i]] = names[i];
        }
        vector<string> v;
        for(auto x:m){
            v.push_back(x.second);
        }
        return v;
    }
};