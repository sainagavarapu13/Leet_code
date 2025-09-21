class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& a) {
        int ans=0,k=0;
        while( k<a.size()){
             if( a[k]%2==0){
                ans=a[k];
                 break;
            }
            k++;
        }
        for( int i=k;i<a.size();i++){
            if( a[i]%2==0){
                ans|=a[i];
            }
        }
        return ans;
    }
};