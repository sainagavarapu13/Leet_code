class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>>ans;
        map<int,int>m;
        for(auto& i:a){
            m[i[0]]+=i[1];
        }
        for(auto& i:b){
            m[i[0]]+=i[1];
        }
        for(auto& [n,c]:m){
           ans.push_back({n,c});
        }
        return ans;
    }
};