class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& a) {
        map<int,int>m;
        vector<int>ans;
        for(auto& i:a) m[i]++;
        for(auto& [n,c]:m){
            if(c%2){
                ans.push_back(n);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};