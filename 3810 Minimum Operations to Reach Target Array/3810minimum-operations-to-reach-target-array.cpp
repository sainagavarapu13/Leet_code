class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            int a = nums[i]-target[i];
            if(a!=0) s.insert(nums[i]);
        }
        return s.size();
    }
};