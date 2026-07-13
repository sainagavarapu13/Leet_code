class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int j=0;j<moveFrom.size();j++){
            m[moveFrom[j]] = 0;
            m[moveTo[j]]++;
        }
        vector<int> v;
        for(auto x:m){
            if(x.second>0){
                v.push_back(x.first);
            }
        }
        return v;
    }
};