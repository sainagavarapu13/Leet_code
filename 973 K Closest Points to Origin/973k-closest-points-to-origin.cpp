class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        priority_queue<vector<int>>pq;
        for(auto& i:a){
            int dis = (i[0]*i[0] + i[1]*i[1]);
            pq.push({dis,i[0],i[1]});
          
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>>ans;
        while(!pq.empty()){
            vector<int>temp = pq.top();
            pq.pop();
            ans.push_back({temp[1],temp[2]});
        }
        return ans;
    }
};