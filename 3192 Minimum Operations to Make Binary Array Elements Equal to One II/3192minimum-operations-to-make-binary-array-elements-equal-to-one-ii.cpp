class Solution {
public:
    int minOperations(vector<int>& nums) {
        int b=1;
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(b!=nums[i]){
                a++;
                b = nums[i];
            }
            
        }
        return a;
    }
};