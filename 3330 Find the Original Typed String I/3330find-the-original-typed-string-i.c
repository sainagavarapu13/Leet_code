int possibleStringCount(char* a) {
    int sum=0;
    int f[26]={0};
    for(int i=0;a[i]!='\0';i++){
       if(a[i]==a[i+1]) sum++;
    }
    
    return sum+1;
}