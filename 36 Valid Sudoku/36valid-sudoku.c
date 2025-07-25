bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    char ch;
    int i,j,k,a;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(board[i][j]>='0' && board[i][j]<='9'){
                for(k=0;k<9;k++){
                    if(board[i][j]==board[i][k] && k!=j) return false;
                    if(board[i][j]==board[k][j] && k!=i) return false;
                }
                for(k=0;k<3;k++){
                    for(a=0;a<3;a++){
                        if((board[i][j] == board[(i/3)*3 + k][(j/3)*3+a]) && (((i/3)*3 + k)!=i) && (((j/3)*3 +a)!=j)) return false;
                    }
                }
            }
        }
    }
    return true;
}