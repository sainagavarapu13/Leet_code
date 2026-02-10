class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<g.size();i++){
            m[g[i]].push_back(i);
        }
        vector<vector<int>> res;
        for(auto i:m){
            vector<int> temp;
            for(int j=0;j<i.second.size();j++){
                if(temp.size()==i.first){
                    res.push_back(temp);
                    temp.clear();
                }
                temp.push_back(i.second[j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};