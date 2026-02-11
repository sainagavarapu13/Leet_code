class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        vector<int>b(a.size(),0);
        int j=0;
        for( int i=0;i<a.size() && j<a.size();i++){
            if( a[i]==0){
                cout << b[j]<<" ";
                b[j++]=0;
                if(j < a.size()) {  
                    b[j++] = 0;
                }
            }else{
                  
                b[j++]=a[i];
            }
        }
        for( int i=0;i<a.size();i++){
            a[i]=b[i];
        }
        
    }
};