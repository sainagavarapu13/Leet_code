int maxi(int a[],int n){
    int i,max=-1;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int maxFreqSum(char* s) {
    int v[26]={0};
    int c[26]={0};
    int i;
    for(i=0;s[i]!='\0';i++){
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        v[s[i]-'a']++;
       }else
       c[s[i]-'a']++;
    }
    int a1=maxi(v,26);
    int a2=maxi(c,26);
    return a1+a2;
}