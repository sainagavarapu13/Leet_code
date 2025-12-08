class Solution {
    public int findClosestNumber(int[] nums) {
        int a = Math.abs(nums[0]);
        int c = 0;
        for(int i=1;i<nums.length;i++){
            int b = Math.abs(nums[i]);
            if(b<a){
                a = b;
                c = i;
            }
            else if(a==b){
                if(nums[c]<0){
                    c = i;
                }
            }
        }
        return nums[c];
    }
}