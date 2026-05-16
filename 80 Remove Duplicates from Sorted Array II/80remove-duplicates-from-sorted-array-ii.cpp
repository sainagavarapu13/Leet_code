class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int k=2;
            k = min( k,(int)a.size());
        for( int i=2;i<a.size();i++){
            if( a[k-2]!=a[i]){
                a[k]=a[i];
                k++;
            }
        }
        return k;
    }
};