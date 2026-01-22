class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m =0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(abs(nums[i]-nums[j])>min(nums[i],nums[j])){
                    break;
                }
                int a = nums[i]^nums[j];
                if(a>m){
                    m = a;
                }
            }
        }
        return m;
    }
};