class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
        while(k--){
            int small = pq.top();
            pq.pop();
            pq.push(small+1);
        }
        long long p = 1;
            int e = 1e9+7;
            while(!pq.empty()){
                p = (p*pq.top())%e;
                pq.pop();
            }
        int a = p;
        return a;
    }
};