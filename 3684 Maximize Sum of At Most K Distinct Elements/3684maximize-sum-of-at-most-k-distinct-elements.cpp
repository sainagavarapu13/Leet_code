class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        unordered_set<int> s;
        int a = 0;
        for(auto x:nums){
            if(s.size()<k){
                s.insert(x);
            }
        }
        vector<int> v(s.begin(),s.end());
        sort(v.rbegin(),v.rend());
        return v;
    }
};