class Solution {
public:
vector<vector<char>>ans;
  bool found = false;
    void check(vector<vector<int>>& row,vector<vector<int>>& col,vector<vector<int>>& box , vector<vector<char>>& a,int i,int j){
          if(found) return;
       if(i==9){
        ans=a;
        found=true;
        return;
       }
          int ni = i;
            int nj = j + 1;
            if(nj == 9){
                ni++;
                nj = 0;
            }
        if(a[i][j]!='.') 
        {
           
            check(row,col,box,a,ni,nj);
            return;
        }
         int b=(i/3)*3+(j/3);
        for(int k=1;k<=9;k++){
            
            if(row[i][k]==1) continue;
            if(col[j][k]==1) continue;
            if(box[b][k]==1) continue;
            row[i][k]=1;
            col[j][k]=1;
            box[b][k]=1;
            a[i][j]=k+'0';
            check(row,col,box,a,ni,nj);
            if(found) return;
            row[i][k]=0;
            col[j][k]=0;
            box[b][k]=0;
            a[i][j]='.';
        }
       
    }
    void solveSudoku(vector<vector<char>>& a) {
        vector<vector<int>>row(10,vector<int>(10,0)),col(10,vector<int>(10,0)),box(10,vector<int>(10,0));
        ans.clear();
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                int b=(i/3)*3+(j/3);
                if(a[i][j]=='.') continue;
                int k=(a[i][j])-'0';
                row[i][k]=1;
                col[j][k]=1;
                box[b][k]=1;
            }
        }
        check(row,col,box,a,0,0);
        a=ans;
    }
};