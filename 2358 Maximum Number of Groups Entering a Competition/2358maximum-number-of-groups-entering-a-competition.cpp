class Solution {
public:
    bool check(vector<int>&a ,int m){
        int idx=0,prev = 0;
        for(int i=1;i<=m;i++){
            int curr = 0;
            for(int j=0;j<i;j++){
                if(idx>=a.size()) return false;
                curr+=a[idx++];
            }
            if(curr<=prev) return false;
            prev = curr;
        }
        return true;
    }
    int maximumGroups(vector<int>& a) {
       sort(a.begin(),a.end());
       int ans;
       int start =1 , end =a.size();
       while(start<=end){
        int mid = (start+end)/2;
        if(check(a,mid)){
            ans = mid;
            start = mid+1;
        }
        else end = mid-1;
       }
       return ans;
    }
};