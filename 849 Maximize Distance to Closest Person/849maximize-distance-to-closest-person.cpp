class Solution {
public:
    int maxDistToClosest(vector<int>& a) {
        vector<int>diff;
        for(int i=0;i<a.size();i++){
            if(a[i]==1){
                diff.push_back(i);
            }
        }
       
        
        if(diff.size()==1){
            int d=a.size()-1-diff[0];
            
           
            
            if(d>diff[0]){
                
                return d;
            }
            else{
                return diff[0];
            }
        }
        int m=0,i;
         m=max(m,diff[0]);
          int t=a.size()-1-diff[diff.size()-1];
            m=max(m,t);
        for(i=1;i<diff.size();i++){
            int k=(diff[i]-diff[i-1])/2;
           m=max(m,k);
        }
        return m;
    }
};