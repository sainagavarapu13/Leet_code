class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int,int> m;
        sort(nums.rbegin(),nums.rend());
        int max = 0,n = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m.size()==3){
                return nums[i];
            }
            if(nums[i]>max){
                max = nums[i];
            }
        }
        return max;
    }
};