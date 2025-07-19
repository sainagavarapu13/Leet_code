int countMatches(char*** items, int itemsSize, int* itemsColSize, char* rulekey, char* ruleValue) {
    int idx=0;
    if(strcmp(rulekey,"type")==0) idx = 0;
    else if(strcmp(rulekey,"color")==0) idx = 1;
    else idx = 2;
    int c=0;
    for(int i=0;i<itemsSize;i++){
        if(strcmp(items[i][idx],ruleValue)==0) c++;
    }
    return c;
}