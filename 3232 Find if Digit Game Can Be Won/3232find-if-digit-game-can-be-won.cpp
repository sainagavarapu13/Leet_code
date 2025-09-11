class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s = 0,e=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10) s+=nums[i];
            else e +=nums[i];
        }
        if(s==e) return false;
        else return true;
    }
};