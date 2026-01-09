class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        long long a = 0;
        while(i<=j){
            if(i==j){
                a+=nums[i];
                break;
            }
            int b = log10(nums[j])+1;
            a += nums[i]*pow(10,b)+nums[j];
            i++;
            j--;
        }
        return a;
    }
};