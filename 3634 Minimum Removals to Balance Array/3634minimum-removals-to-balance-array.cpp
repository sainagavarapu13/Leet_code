class Solution {
public:
    int minRemoval(vector<int>& a, int k) {
        sort(a.begin(),a.end());
       int start = 0 ,end =0,len=1;
       int l=a.size();
       while(end<a.size()){
      while(end<a.size()&&a[end]<=(long long)k*a[start]){
        end++;
       }
       len=max(len,end-start);
       start++;
       }
       return l-len;
      
    }
};