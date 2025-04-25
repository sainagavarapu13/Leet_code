int pivotInteger(int n) {
    int sum = (n+1)*n/2;
    float k = sqrt(sum);
    int l = k;
    if( k-l ==0) return l;
    else return -1;
    
}