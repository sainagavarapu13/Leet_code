int mini(int a[],int n){
    int i,min=98765,idx;
    for(i=0;i<n;i++){
        if(a[i]!=-1&&a[i]<min){
            min=a[i];
            idx=i;
        }
    }
    a[idx]=98765;
    return min;
}
int maxi(int a[],int n){
    int i,max=-1,idx;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            idx=i;
        }
    }
    a[idx]=-1;
    return max;
}
int maxProductDifference(int* a, int n){
int ans;
 int maxi1=maxi(a,n);
 int maxi2=maxi(a,n);
 int mini1=mini(a,n);
 int mini2=mini(a,n);
 ans=(maxi1*maxi2)-(mini1*mini2);
 return ans;

}