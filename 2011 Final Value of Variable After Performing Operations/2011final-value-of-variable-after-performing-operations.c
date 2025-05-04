int finalValueAfterOperations(char** s, int x) {
    int val =0;
    for( int i=0;i<x;i++){
        if( s[i][0] =='-' || s[i][2] =='-') val-=1;
        else val++;
    }
    return val;
    
}