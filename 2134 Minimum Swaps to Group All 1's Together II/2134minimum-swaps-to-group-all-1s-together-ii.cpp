class Solution {
public:
    int minSwaps(vector<int>& a) {
        int ones = 0;
        int n=a.size();
        for(int i=0;i<a.size();i++){
            if(a[i]==1){
                ones++;
            }
        }
        
        if(ones==0||ones==a.size()||ones==a.size()-1) return 0;
        int start = 0,end = 0,ans=INT_MAX;
        int cnt=0;
        while(end<a.size()+ones){
            int len = end-start+1;
             if(a[end%n]==0){
                cnt++;
            }
            if(len>ones){
                if(a[start%n]==0) cnt--;
                start++;
            }
            if(end - start + 1 == ones)
           ans=min(ans,cnt);
           end++;
        }
        return ans;
    }
};