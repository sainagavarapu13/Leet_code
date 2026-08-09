class Solution {
public:
    
    long long weightedSum(vector<int>& p, vector<int>& nums) {
        queue<pair<int,int>>q;
        q.push({0,1});
        int n = p.size();
        vector<vector<int>>childs(n);
        for(int i=1;i<p.size();i++){
            childs[p[i]].push_back(i);
        }
        int h=1;
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            h = max(h,y);
            for(auto& i:childs[x]){
                q.push({i,y+1});
            }
        }
       q.push({0,1});
        long long sum =0;
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            sum+=(1LL*nums[x]*(h-y+1));
            for(auto& i:childs[x]){
                q.push({i,y+1});
            }
        }
        return sum;
    }
};