class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& a) {
        vector<int>ans;
       priority_queue<int>pq;
        int i,j;
        for(i=0;i<a.size();i++){
            sort(a[i].begin(),a[i].end());
        }
        int sum=0;
        for(i=0;i<a[0].size();i++){
            for(j=0;j<a.size();j++){
                pq.push(a[j][i]);
            }
            sum+=pq.top();
            pq=priority_queue<int>();
        }
        return sum;
    }
};