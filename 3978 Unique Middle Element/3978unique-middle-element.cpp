class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int a = nums[n/2],b=0;
        for(int i=0;i<n;i++){
            if(nums[i]==a) b++;
        }
        if(b!=1) return false;
        return true;
    }
};