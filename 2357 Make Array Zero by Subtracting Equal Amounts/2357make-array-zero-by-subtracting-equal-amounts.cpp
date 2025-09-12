class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int a  = s.size();
        if(*s.begin() ==0) a--;
        return a;
    }
};