class Solution {
    public int[] getConcatenation(int[] nums) {
        int a[] = new int[2*nums.length];
        int i;
        for(  i =0;i<nums.length;i++){
            a[i]=nums[i];
        }
       int k =i;
        for(  i =0;i<nums.length;i++){
            a[k++]=nums[i];
        }
        return a;
    }
}