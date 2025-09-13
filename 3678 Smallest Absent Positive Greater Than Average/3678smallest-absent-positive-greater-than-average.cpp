class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        double a = accumulate(nums.begin(),nums.end(),0.0)/nums.size();
        int b = floor(a) + 1;
        if(b<=0) b= 1;
        while(1){
            int a=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==b){
                    a=1;
                    b++;
                    break;
                }
            }
            if(a==0) return b;
        }
        return b;
    }
};