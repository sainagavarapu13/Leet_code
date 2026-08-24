class Solution {
    public int missingNumber(int[] a) {
        int k=0,f=0;
        while(true){
            f=0;
            for(int i=0;i<a.length;i++){
                if(a[i]==k){
                    f=1;
                    break;
                }
            }

            if(f==0){
                return k;
            }
            k++;
        }
        //return 1;
    }
}