class Solution {
public:
    vector<int> minSubsequence(vector<int>& a) {
        priority_queue<int>pq;
        int sum=0;
        for(int i=0;i<a.size();i++){ 
            pq.push(a[i]);
            sum+=a[i];
        }
        int t_sum=0;
        vector<int>ans;
        while(!pq.empty()){
            int t=pq.top();
            t_sum+=t;
            sum=sum-t;
             ans.push_back(pq.top());
               pq.pop();
            if(t_sum>sum){
                break;
            }
        }
        return ans;
    }
};