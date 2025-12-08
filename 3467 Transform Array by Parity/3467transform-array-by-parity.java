class Solution {
    public int[] transformArray(int[] nums) {
        int a=0,n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                a++;
            }
        }
        int arr[] = new int[n];
        Arrays.fill(arr,0);
        for(int i=a;i<n;i++){
            arr[i] = 1;
        }
        return arr;
    }
}