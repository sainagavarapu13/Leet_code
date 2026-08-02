class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size(),m= shifts.size();
        int k=0;
        vector<long long> v(n+1,0);
        for(int i=0;i<n;i++){
            v[i+1] = v[i]+tasks[i];
        }
        long long  t = v[n],d=0;
        vector<int> ans;
        for(int i=0;i<m;i++){
            d += shifts[i];
            if(d >= t){
                ans.push_back(0);
                d = 0;
                continue;
            }
            auto it = upper_bound(v.begin(),v.end(),d);
            int b = it - v.begin()-1;
            ans.push_back(n-b);
        }
        return ans;
    }
};