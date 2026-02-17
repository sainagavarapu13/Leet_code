class Solution {
public:
    long long maxSum(vector<vector<int>>& a, vector<int>& b, int k) {
        priority_queue<int>t;
        for(int i=0;i<a.size();i++){
            sort(a[i].begin(),a[i].end(),greater<>());
            for(int j=0;j<b[i];j++){
                t.push(a[i][j]);
            }
        }
        long long sum=0;
        while(k--&&!t.empty()){
           sum+=(long long)t.top();
           t.pop();
        }
        return sum;
    }
};