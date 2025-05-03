void rotate(int* a, int n, int k) {
int b[n];
    for(int i=0;i<n;i++){
           if(i+k>=n){
		
        b[(i+k)%n]=a[i];
    }
        else{
		
        b[i+k]=a[i];
    }

    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}