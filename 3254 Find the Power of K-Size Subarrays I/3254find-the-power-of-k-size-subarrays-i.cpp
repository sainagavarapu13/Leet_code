class Solution {
public:
    vector<int> resultsArray(vector<int>& a, int k) {
      int bad=0;
      
        if( k==1) return a;
        vector<int>v;
        int j=0,i=0;
        while( j<a.size()){
                        if( j!=0){
                if( a[j]-a[j-1]!=1){
                    bad++;
                }
            }
            if( j-i+1 < k ) j++;
            else{
                if( bad){
                    v.push_back(-1);
                   
                }else v.push_back( a[j]);
                if(i+1<a.size())if( a[i+1]-a[i] !=1) bad--;
               
                 i++;
                 j++;
            }

        }
        return v;
    }
};