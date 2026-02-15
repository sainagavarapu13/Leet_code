class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int> m;
        int n = bulbs.size();
        for(int i=0;i<n;i++){
            m[bulbs[i]] = m[bulbs[i]] ^ 1;
        }
        vector<int> v;
        for(auto x:m){
            if(x.second==1) v.push_back(x.first);
        }
        return v;
    }
};