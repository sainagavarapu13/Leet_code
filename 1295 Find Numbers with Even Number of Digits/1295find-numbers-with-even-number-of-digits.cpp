class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a =0;
        for(int i=0;i<nums.size();i++){
            int c = (log10(nums[i]))+1;
            if(c%2==0) a++;
        }
        return a;
    }
};