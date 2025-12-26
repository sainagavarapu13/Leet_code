class Solution {
public:
    long long maximumScore(vector<int>& a, string s) {
        priority_queue<int>pq;
        long long sum=0;
        for(int i=0;i<a.size();i++){
            pq.push(a[i]);
            if(s[i]=='1'){
                sum+=pq.top();
                pq.pop();
            }
        }
        return sum;
    }
};