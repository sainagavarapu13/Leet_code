class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            vector<int> temp;
            if(nums[i]==0){
                v.push_back(0);
            }
            while(nums[i]>0){
               temp.push_back(nums[i]%10);
               nums[i] = nums[i]/10;
            }
            reverse(temp.begin(),temp.end());
            v.insert(v.end(),temp.begin(),temp.end());
        }
        return v;
    }
};