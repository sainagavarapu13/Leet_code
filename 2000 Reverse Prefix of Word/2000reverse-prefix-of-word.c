char* reversePrefix(char* s, char ch) {
    int flg =0;
    int ind;
    for( int i=0;s[i]!='\0';i++){
        if( s[i] == ch){
            flg =1;
            ind =i;
            break;
        }
    }
    if( flg ==0) return s;
    else{
        if( ind %2 == 1){
        for( int i=0;i<=ind/2;i++){
                char temp = s[i];
                s[i]=s[ind-i];
                s[ind-i]=temp;
            }
        }else{
            for( int i=0;i<ind/2;i++){
                char temp = s[i];
                s[i]= s[ind -i];
                s[ind-i]=temp;
            }
        }
    }
    return s;
    
}