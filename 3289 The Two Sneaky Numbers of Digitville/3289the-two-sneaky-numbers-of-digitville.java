class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        int n = nums.length-1;
        int m = n + 3;
        int A[] = new int[m];
        for(int i=0;i<=n;i++){
            A[nums[i]]++;
        }
        int B[] = new int[2];
        int a=0;
        for(int i=0;i<m;i++){
            if(A[i]==2){
                B[a]=i;
                a++;
            }
            if(a==2){
                break;
            }
        }
        return B;
    }
}