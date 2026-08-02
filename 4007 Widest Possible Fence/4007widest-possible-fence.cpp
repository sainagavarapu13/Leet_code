class Solution {
public:
    int maximumWidth(vector<int>& planks) {
        unordered_map<int,int> m,f;
        int n= planks.size();
        for(int i=0;i<n;i++){
            f[planks[i]]++;
        }
        vector<pair<long long,int>> v(f.begin(),f.end());
        for(auto it : v) m[it.first] = it.second;
        int g = v.size();
        for(int i=0;i<g;i++){
            for(int j = i;j<g;j++){
                long long value = v[i].first+v[j].first;
                if(i==j) m[value] += v[i].second / 2;
                else m[value] += min(v[i].second,v[j].second);
            }
        }
        int ans = 1;
        for(auto it:m) ans = max(ans,it.second);
        return ans;
    }
};