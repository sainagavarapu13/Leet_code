int duplicateNumbersXOR(int* a, int n) {
    int f[51]={0};
    int i;
    for(i=0;i<n;i++){
        f[a[i]]++;
    }
    int x=0;
    for(i=0;i<51;i++){
        if(f[i]==2){
            x=i;
            break;
        }
    }
    
    for(int j=i+1;j<51;j++){
      
        if(f[j]==2){
           x=x^j;
        }
        
    }
    return x;
}