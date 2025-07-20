int possibleStringCount(char* a) {
    int cnt =1;
    for( int i=1;a[i]!='\0';i++){
        if( a[i-1] == a[i]) cnt++;
    }
    return cnt;
}