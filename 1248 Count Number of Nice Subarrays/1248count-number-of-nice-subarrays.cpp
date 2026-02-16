class Solution {
public:
    int numberOfSubarrays(vector<int>& a, int k) {
        int start = 0,end=0;
        int cnt=0,arr=0,ans=0;
        while(end<a.size()){
            if(a[end]%2==1){
                cnt++;
                arr=0;
            }
            while(cnt==k){
                arr++;
                if(a[start]%2==1){
                    cnt--;
                }
                start++;
            }
            ans+=arr;
            end++;
        }
        return ans;
    }
};