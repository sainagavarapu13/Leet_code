class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int a=board.size(),b=board[0].size(),c=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(board[i][j]=='R'){
                    for(int l=i+1;l<a;l++){
                        if(board[l][j]=='p'){
                            c++;
                            break;
                        }
                        else if(board[l][j]=='B'){
                            break;
                        }
                    }
                    for(int l=i-1;l>=0;l--){
                        if(board[l][j]=='p'){
                            c++;
                            break;
                        }
                        else if(board[l][j]=='B'){
                            break;
                        }
                    }
                    for(int l=j;l<b;l++){
                        if(board[i][l]=='p'){
                            c++;
                            break;
                        }
                        else if(board[i][l]=='B'){
                            break;
                        }
                    }
                    for(int l=j;l>=0;l--){
                        if(board[i][l]=='p'){
                            c++;
                            break;
                        }
                        else if(board[i][l]=='B'){
                            break;
                        }
                    }
                }
            }
        }
        return c;
    }
};