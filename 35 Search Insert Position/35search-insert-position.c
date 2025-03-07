int searchInsert(int* a, int n, int k) {
    int i,j,c=0;
    for(i=0;i<n;i++){
        if(a[i]>=k){
            j=i;
            c++;
            break;
        }
    }if(c!=0)return j;
    else return n;
    }