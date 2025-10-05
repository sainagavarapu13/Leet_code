class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        long long a=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                a+=nums[i];
            }
            else{
                a-=nums[i];
            }
        }
        return a;
    }
};