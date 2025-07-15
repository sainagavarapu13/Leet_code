

int countConsistentStrings(char * a, char ** w, int x){
    int f[26]={0};
    for( int i=0;i<strlen(a);i++){
        f[a[i]-'a']=1;
    }
    int cnt=0;
    for( int i=0;i<x;i++){
        int flg =1;
        for( int j=0;w[i][j]!='\0';j++){
            if(f[w[i][j]-'a']!=1){
                flg =0;
                break;
            }
        }
        if( flg ==1) cnt++;
    }
    return cnt ;
}
