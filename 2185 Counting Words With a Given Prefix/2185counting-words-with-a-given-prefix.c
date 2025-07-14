int prefixCount(char** w, int x, char* p) {
    int cnt=0;
    for( int i=0;i<x;i++){
         int flg =1;
        for( int j=0;p[j]!='\0';j++){
            if(w[i][j] != p[j]){
                flg =0;
                break;
            } 
           
        }
        if( flg ==1) cnt++;
    }
    return cnt;
}