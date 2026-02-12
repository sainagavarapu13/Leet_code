class Solution {
public:
    int maxResult(vector<int>& a, int k) {
        vector<int>d(a.size(),INT_MIN);
        d[0] = a[0];
        int maxi=INT_MIN;
        priority_queue<pair<int,int>>q;
        q.push({a[0],0});
        for(int i=1;i<a.size();i++){
             while(!q.empty() && q.top().second + k < i) q.pop();

            d[i] = q.top().first + a[i];
            q.push({d[i], i});
        }
        return d.back();
    }
};