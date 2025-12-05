class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=0,total = accumulate(nums.begin(),nums.end(),0),s=0,p=0;
        for(int i=0;i<nums.size()-1;i++){
            p += nums[i];
            s = total - p;
            if(abs(p-s)%2==0)n++;
        }
        return n;
    }
};