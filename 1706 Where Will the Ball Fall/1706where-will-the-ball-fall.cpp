class Solution {
public:
    vector<int> findBall(vector<vector<int>>& a) {
        vector<int>res;
        for(int k=0;k<a[0].size();k++){
            int i=0;
            int j=k;
            int f=0;
            while(i<a.size()){
           if(a[i][j]==1){
            if( j==a[0].size()-1 || a[i][j+1]==-1){
                f=1;
                break;
            }else{
               
                j++;
            }
           }else{
             if( j==0 || a[i][j-1]==1){
                f=1;
                break;
            }
           
            j--;
           }
            i++;
            }
            
            if(f==0)res.push_back(j);
            else res.push_back(-1);
        }
        return res;
    }
};