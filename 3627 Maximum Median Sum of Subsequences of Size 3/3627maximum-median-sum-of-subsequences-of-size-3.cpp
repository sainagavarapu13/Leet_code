class Solution {
public:
    
     long long maximumMedianSum(vector<int>& a) {
        sort(a.begin(),a.end(),greater<>());
      int i=1;
      long long sum=0,cnt=0;
      int n=a.size()/3;
     while(i<a.size()&&cnt<n){
        cnt++;
        sum+=a[i];
        cout<<a[i]<<" ";
        i=i+2;
     }
       return sum;
    }
};