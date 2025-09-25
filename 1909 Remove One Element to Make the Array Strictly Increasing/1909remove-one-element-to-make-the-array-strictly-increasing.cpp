class Solution {
public:
    int is_sort(vector<int> a){
        int i,j;
       
        for(i=0;i<a.size();i++){

           for(j=i+1;j<a.size();j++){
            if(a[i]>=a[j]) return 0;
           }
        }
        return 1;
    }
    bool canBeIncreasing(vector<int>& a) {
        int i,j,cnt=0,num,c=0,idx,idx1;
         vector<int>temp(a.begin(),a.end());
         if(is_sort(a)){
             return true;
         }
        for(i=0;i<a.size();i++){
            num=a[i];
            for(j=i+1;j<a.size();j++){
                if(num>=a[j]) {
               idx=i;
               idx1=j;
                break;
                }
                
            }
           
        }
     
        a.erase(a.begin()+idx);
        if(is_sort(a)) return true;
         temp.erase(temp.begin()+idx1);
         if(is_sort(temp)) return true;
             return false;
    }
};