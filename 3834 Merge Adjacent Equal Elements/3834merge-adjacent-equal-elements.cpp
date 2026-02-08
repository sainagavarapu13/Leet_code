class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            long long p = nums[i];
            while(!v.empty() && v.back()==p){
                p *=2;
                v.pop_back();
            }
            v.push_back(p);
        }
        return v;
    }
};