class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& a, int k) {
        priority_queue<pair<double, pair<int,int>>> pq;
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                double K = (double)a[i]/a[j];
                pq.push({K,{a[i],a[j]}});
                if(pq.size()>k) pq.pop();
            }
        }
        vector<int>ans;
        return {pq.top().second.first,pq.top().second.second};
    }
};