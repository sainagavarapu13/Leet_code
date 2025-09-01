class Solution {
public:
    int partitionArray(vector<int>& a, int k) {
        priority_queue<int,vector<int>,greater<>>pq;
        for(auto& i : a) pq.push(i);
        int cnt=0;
        while(!pq.empty()){
            cnt++;
            int t=pq.top();
            pq.pop();

            while(!pq.empty()&&pq.top()<=(t+k)){
                pq.pop();
               
            }
        }
        return cnt;
    }
};