class Solution {
public:
   
    int longestBalanced(vector<int>& a) {
    int m=0;
       for(int i=0;i<a.size();i++){
           set<int>eve,odd;
           for(int j=i;j<a.size();j++){
                 if(a[j]%2==0) eve.insert(a[j]);
                 else odd.insert(a[j]);
               if(eve.size()==odd.size()){
                   m=max(m,j-i+1);
               }
               }
           }
        return m;
    }
};