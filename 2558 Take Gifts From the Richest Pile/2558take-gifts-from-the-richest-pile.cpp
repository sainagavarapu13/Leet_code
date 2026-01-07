class Solution {
public:
    long long pickGifts(vector<int>& a, int k) {
        long long sum =0;
        priority_queue<int>pq;
        for(int i=0;i<a.size();i++){
            pq.push(a[i]);
        }
        while(k--){
            int lar = pq.top();
            pq.pop();
            pq.push(sqrt(lar));
        }
        while(!pq.empty()){
            int lar = pq.top();
            pq.pop();
            sum+=lar;
        }
        return sum;
    }
};