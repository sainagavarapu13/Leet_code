class Solution {
public:
    int maximumProduct(vector<int>& a, int k) {
        priority_queue<int,vector<int>,greater<>>pq(a.begin(),a.end());
        while(k--){
            int s=pq.top();
            pq.pop();
            pq.push(s+1);
        }
        long long p=1;
        while(!pq.empty()){
            p=(p*(pq.top()))%1000000007;
            pq.pop();
        }
        return (int)p;
    }
};