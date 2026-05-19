class Solution {
public:
    long long maximumSubarraySum(vector<int>& a, int k) {
        long long ans=0,sum=0;
        map<int,int> mp;
          int start=0;
        for(int i=0;i<k;i++){
             mp[a[i]]++;
           sum+=a[i];
        }
        if(mp.size()==k){
            ans=sum;
        }
        int end=k;
        
        while(end<a.size()){
            mp[a[end]]++;
             sum+=a[end];
            int del=a[start];
            mp[a[start]]--;
            if(mp[del]==0){
                mp.erase(del);
            }
            sum-=del;
            if(mp.size()==k){
               
                ans=max(ans,sum);
            }
            start++;
            
            end++;
        }
        return ans;
    }
};