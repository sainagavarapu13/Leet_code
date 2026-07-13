class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v(m.begin(),m.end());
        int res = 0;
        for(int i=1;i<v.size();i++){
            // cout<<v[i].first<<" "<<v[i].second<<endl;
            int c = v[i].first - v[i-1].first;
            if(c==1){
                res = max(res,v[i-1].second+v[i].second);
            }
        }
        return res;
    }
};