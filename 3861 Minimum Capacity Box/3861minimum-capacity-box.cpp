class Solution {
public:
    int minimumIndex(vector<int>& a, int k) {
        for(int i=0;i<a.size();i++){
            a[i]-=k;
            cout<<a[i]<<" ";
        }
        int mini=INT_MAX;
        int idx=-1;
        for(int i=0;i<a.size();i++){
         if(a[i]>=0&&a[i]<mini){
             mini=a[i];
             idx=i;
         }   
           
        }
       return idx;
    }
};