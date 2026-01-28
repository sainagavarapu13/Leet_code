class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n = values.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({values[i],labels[i]});
        }
        map<int,int> m;
        sort(v.rbegin(),v.rend());
        int res = 0,a=0;
        for(int i=0;i<n;i++){
            if(a==numWanted){
                return res;
            }
            if(m[v[i].second]==useLimit){
                continue;
            }
            res += v[i].first;
            m[v[i].second]++;
            a++;
        }
        return res;
    }
};