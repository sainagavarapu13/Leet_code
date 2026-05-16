class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
     vector<int>res;
     int i=0,j=0;
     if( n!=0 && m!=0){
     while(i<m&& j<n){
        if( a[i]>b[j]){
            res.push_back(b[j]);
            j++;
        }else{
            res.push_back(a[i]);
            i++;
        }
     }
     while( i<m) res.push_back(a[i++]);
     while( j<n) res.push_back(b[j++]);
     a=res;
     }else{
        if(m==0) a=b;
     }

    }
};