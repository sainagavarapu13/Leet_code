class Solution {
public:
    bool fun(vector<int>& a, int m,int k){
       int ch = a[0];
       int cnt=1;
       for(int i=1;i<a.size();i++){
        if(abs(a[i]-ch)>=k){
            cnt++;
            ch=a[i];
        }
       }
            return cnt>=m;
    }
    int maxDistance(vector<int>& a, int m) {
        sort(a.begin(),a.end());
     int left = 1,right = a.back()-a[0];
     int ans=0;
     while(left<=right){
        int mid = (left+right)/2;
        if(fun(a,m,mid)){
            ans=mid;
            left = mid+1;
        }
        else{
            right=mid-1;
        }
     }   
     return ans;
    }
};