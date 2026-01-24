class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1,max = 0;
        while(i<j){
            int a = nums[i]+nums[j];
            if(max<a){
                max =a;
            }
            i++;
            j--;
        }
        return max;
    }
};