int pivotInteger(int n) {
    int ans=n*(n+1)/2;
    float an= sqrt(ans);
    int anss=sqrt(ans);
    if(an==anss) return anss;
    else return -1;
}