int findClosest(int x, int y, int z) {
     int l = abs(z-x);
    int s = abs(z-y);
    if( l==s) return 0;
    else if(l<s) return 1;
    else return 2;
    
}