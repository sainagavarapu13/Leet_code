class Solution {
public:
    int minimumArea(vector<vector<int>>& a) {
        int start_idx=-1,end_idx=-1;
        int i,j=0;
        while(j<a[0].size()){
        for(i=0;i<a.size();i++){
            if(a[i][j]==1) {
                start_idx=j;
                break;
            }
            
        }
        if(start_idx==j) break;
        j++;
        }
        j=a[0].size()-1;
        while(j>=0){
        for(i=0;i<a.size();i++){
            if(a[i][j]==1){
                end_idx=j;
                break;
            }
        }
            if(end_idx==j) break;
            j--;
        }
        int lenght=abs(start_idx-end_idx)+1;
       i=0;
       int b_start_idx=-1,b_end_idx=-1;
       while(i<a.size()){
       for(j=start_idx;j<=end_idx;j++){
        if(a[i][j]==1){
            b_start_idx=i;
            break;
        }
       }
       if(b_start_idx==i) break;
       i++;
       }
    i=a.size()-1;
    while(i>=0){
        for(j=start_idx;j<=end_idx;j++){
            if(a[i][j]==1){
                b_end_idx=i;
                break;
            }
        }
        if(b_end_idx==i){
            break;
        }
        i--;
    }
    cout<<start_idx<<" "<<end_idx<<" "<<b_start_idx<<" "<<b_end_idx;
    int breadth= abs(b_start_idx-b_end_idx)+1;
    
    return lenght*breadth;
    }
};