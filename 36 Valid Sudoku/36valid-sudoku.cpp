
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& m) {
        int flg =0;
        
        for( int i=0;i<9;i++){
            unordered_set<char>a;
         unordered_set<char>b;
         int o=0,n=0;
            for( int j =0;j<9;j++){
                if(m[i][j]=='.' ) o++;
               else a.insert(m[i][j]); 
                if( m[j][i]=='.') n++;
                else b.insert(m[j][i]);
            }
            if( a.size()!=9-o || b.size()!=9-n ){
                return 0;
            }
        }
        
        for( int row =0 ;row <9;row+=3){
            for( int col =0; col<9;col+=3){
                map<int, int >t;
                for( int i=row ; i<row+3;i++){
                    for( int j = col ; j<col+3 ;j++){
                        if( m[i][j] !='.'){
                            t[m[i][j]]++;
                        }
                    }
                }
                for( auto& [n,y] : t){
                    if( y >1) return 0;
                }

            }
        }
        
        return 1;

    }
};
        