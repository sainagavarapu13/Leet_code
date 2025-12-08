class Solution {
    public void moveZeroes(int[] nums) {
        int a=0;
        for(int i=0;i<nums.length;i++){
             if(nums[i]!=0){
                if(a==i){
                    a++;
                }
                else{
                nums[a] = nums[i];
                nums[i] = 0;
                a++;
                }
             }
        }
    }
}