class Solution {
    public int singleNumber(int[] a) {
        Arrays.sort(a);
        int i;
        if(a.length==1) return a[0];
        for(i=0;i<a.length;i++){
            if(i==0){
                if(a[i]!=a[i+1]) return a[i];
            }
            else if(i==a.length-1){
                if(a[i]!=a[i-1]) return a[i];
            }
            else if(a[i]!=a[i+1]&&a[i]!=a[i-1]) return a[i];
        }
        return 1;
    }
}