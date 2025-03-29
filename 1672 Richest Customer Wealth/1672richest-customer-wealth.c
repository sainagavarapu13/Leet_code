int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0,c=0;
    for(int i=0;i<accountsSize;i++){
         c = 0;
        for(int j=0;j<accountsColSize[i];j++){
            c = c + accounts[i][j];
        }
        if(max<c) max = c;
    }
    return max;
}