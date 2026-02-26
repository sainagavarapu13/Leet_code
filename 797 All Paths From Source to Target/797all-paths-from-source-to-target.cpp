class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& a) {
        int n=a.size();
        queue<pair<int , vector<int>>>q;
        q.push({0,{0}});
        vector<vector<int>>ans;
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            if(y.back() == n-1){
                ans.push_back(y);
            }
            for(auto& i:a[x]){
                vector<int>temp;
                temp=y;
                temp.push_back(i);
                q.push({i,temp});
            }
        }
        return ans;
    }
};