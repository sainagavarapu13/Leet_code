class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int b = accumulate(nums.begin(),nums.begin()+i,0);
            int sum = accumulate(nums.begin()+i+1,nums.end(),0);
            if(b==sum) return i;
        }
        return -1;
    }
};