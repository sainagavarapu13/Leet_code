int dig(int n){
        int b = 0;
        while(n){
            int a =n%10;
            b += a;
            n /=10;
        }
        return b;
    }
class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int a = dig(nums[i]);
            if(min>a){
                min = a;
            }
        }
        return min;
    }
};