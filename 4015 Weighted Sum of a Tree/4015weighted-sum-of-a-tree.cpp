class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        int n = parent.size();
        vector<int> dep(n,0);
        vector<vector<int>> children(n);
        int root = -1;
        int hei = 0;
        for(int i=0;i<n;i++){
            if(parent[i]==-1) root = i;
            else{
                children[parent[i]].push_back(i);
            }
        }
        queue<int> q;
        q.push(root);
        dep[root] = 1;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            hei = max(hei,dep[curr]);
            for(int c:children[curr]){
                dep[c] = dep[curr]+1;
                q.push(c);
            }
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            ans += 1LL * nums[i] * (hei-dep[i]+1);
        }
        return ans;
    }
};