class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int a=0,b =0,d = 0,c =0,n = nums.size();
        for(int i=1;i<n;i++){
            if(b==0 && nums[i-1]<nums[i]){
                a = 1;
            }
            else if(a==1 && c==0 && nums[i-1]>nums[i]){
                b = 1;
            }
            else if(a==1 && b==1 && nums[i-1]<nums[i]){
                c = 1;
            }
            else{
                return false;
            }
        }
        return (a==1 && b==1 && c==1);
    }
};