class Solution {
public:
    int minStoneSum(vector<int>& a, int k) {
        priority_queue<int>pq;
        for(auto& i:a){
            pq.push(i);
        }
        while(k--){
            int lar = pq.top();
            pq.pop();
            lar  = lar - (floor(lar/2));
            pq.push(lar);
        }
        int sum = 0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};