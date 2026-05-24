class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int> m;
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]<k){
                a.push_back(nums[i]);
                m[nums[i]]++;
            }
        }
        return a;
    }
};