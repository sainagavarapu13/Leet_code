class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(),mini = INT_MAX;
        vector<long long> pref(n+1);
        pref[0] = 0;
        for(int i=0;i<n;i++){
            pref[i+1] = nums[i]+pref[i];
        }
        int i=0,j=1;
        while(i<j && j<=nums.size()){
            int res = pref[j]-pref[i];
            if(res>=target) mini = min(mini,j-i);
            // cout<<pref[j]<<" "<<pref[i]<<endl;
            if(res<target){
                j++;
            }
            else{
                i++;
            }
        }
        if(mini==INT_MAX) return 0;
        return mini;
    }
};