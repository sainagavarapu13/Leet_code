class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size(),res=0;
        vector<int> odd;
        for(int i=0;i<n;i++) if(nums[i]%2==1) odd.push_back(i);
        for(int i=0;i<=(int)odd.size()-k;i++){
            res += (odd[i]-(i!=0 ? odd[i-1] : -1)) * (((i+k)==odd.size() ? n : odd[i+k]) - odd[i+k-1]);
        }
        return res;
    }
};