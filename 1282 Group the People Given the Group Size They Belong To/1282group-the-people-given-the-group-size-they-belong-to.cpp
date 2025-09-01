class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& a) {
        vector<vector<int>>ans;
       vector<int>an;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        for(int i=0;i<a.size();i++) pq.push({a[i],i});
        int i=0;
        while(!pq.empty()){
            auto [n,ind] = pq.top();
            int k=n;
            while(k--){
                auto [n,ind]=pq.top();
            an.push_back(ind);
                pq.pop();
            }
            ans.push_back(an);
            an.clear();
            i++;
        }
        return ans;
    }
};