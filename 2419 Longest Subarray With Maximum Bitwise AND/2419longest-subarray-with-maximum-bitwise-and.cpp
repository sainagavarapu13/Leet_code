class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
        }
        int a = 0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi){
                a++;
            }
            else{
                b = max(b,a);
                a =0;
            }
        }
        b = max(b,a);
        return b;
    }
};