class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return 0;
        int in = 0 ,dc = 0,id = -1;
        for(int i=0;i<n;i++){
            if(nums[i]==0) id = i;
            if(nums[i]>nums[(i+1)%n]){
                in++;
            }
            if(nums[i]<nums[(i+1)%n]){
                dc++;
            }
        }
        bool ic = (in<=1),dec = (dc<=1);
        if(!ic && !dec){
            return -1;
        }
        int ans = 1e9;
        if(ic){
            int ro = id;
            ans = min(ans,ro);
            int rv = 2 + ((n-id)%n);
            ans = min(ans,rv);
        }
        if(dec){
            int rv = 1 + (n-1-id);
            ans = min(ans,rv);
            int ro = ((id+1)%n)+1;
            ans = min(ans,ro);
        }
        return ans == 1e9 ? -1 : ans;
    }
};