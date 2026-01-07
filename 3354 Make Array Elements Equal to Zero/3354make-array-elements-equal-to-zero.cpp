class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            int l =0,r=0;
            if(nums[i]==0){
                for(int j=0;j<i;j++){
                    l+=nums[j];
                }
                for(int j=i+1;j<nums.size();j++){
                    r+=nums[j];
                }
                if(abs(l-r)==0){
                    res += 2;
                }
                if(abs(l-r)==1){
                    res += 1;
                }
            }
        }
        return res;
    }
};