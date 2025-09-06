bool canPlaceFlowers(int* a, int n, int k) {
int cnt=0;
int i=0;
while(i<n){
    if(i==0&&a[i]==0&&(n==1||a[i+1]==0)){
        a[i]=1;
        cnt++;
        i+=2;
    }
    else if(i==(n-1)&&a[i]==0&&a[i-1]!=1) {
        a[i]=1;
         cnt++;
        i+=2;
    }
    else if(i!=0&&i!=(n-1)){
        if(a[i]==0&&a[i]==a[i-1]&&a[i]==a[i+1]){
            a[i]=1;
            i=i+2;
            cnt++;
        }
        else i++;
    }
    else {
        i++;
    }
}
if(cnt>=k) return 1;
else return 0;
}