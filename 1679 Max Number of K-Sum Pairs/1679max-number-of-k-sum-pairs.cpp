class Solution {
public:
    int maxOperations(vector<int>& a, int k) {
        int start=0,cnt=0,end=a.size()-1;
        sort(a.begin(),a.end());
        while(start<end){
          
            
            if(a[start]+a[end]==k){
                cnt++;
               start++;
               end--;
               
            }
            else if(a[start]+a[end]>k) end--;
            else start++;
            
            
           
        }
        return cnt;
    }
};