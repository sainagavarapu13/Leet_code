int maximumCount(int* a, int n) {
    int i,j,pos=0,neg=0;
    for(i=0;i<n;i++){
       
            if(a[i]>0) pos++;
            else if(a[i]<0) neg++;
        }
    
    if(pos>neg) return pos;
    else return neg;
}