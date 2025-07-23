int peakIndexInMountainArray(int* n, int x) {
    int ele =0,i;
        if(x == 1) return 0;
        for(  i=0;i<x;i++){
            if(i==0){
                if(n[i]>n[i+1]) return i;
           } else if( i == x-1){
                 if( n[i-1]<n[i])return i;
            }else {
                if(n[i]>n[i-1] && n[i]>n[i+1] )return i;
           }
        }
        return 0;
}