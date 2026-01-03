class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n= nums.size();
        int mini = INT_MAX,left =0;
        long long sum = 0;
        unordered_map<int,int> counts;
        for(int i=0;i<n;i++){
            if(counts[nums[i]]==0){
                sum +=nums[i];
            }
            counts[nums[i]]++;
        while(sum>=k){
            mini = min(mini,i-left+1);
            counts[nums[left]]--;
            if(counts[nums[left]]==0){
                sum -=nums[left];
            }
            left++;
        }
        }
        return (mini==INT_MAX) ? -1 : mini;
    }
};