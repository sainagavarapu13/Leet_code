class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        vector<long long> p(n+1);
        p[n] = 1;
        long long res = 1e14;
        for(int i=n-1;i>=0;i--){
            if (p[i+1]>res/nums[i]) p[i] = res;
            else p[i] = p[i+1]*nums[i];
        }
        long long ls = 0;
        for(int i=0;i<n;i++){
            if(ls==p[i+1]) return i;
            ls += nums[i];
        }
        return -1;
    }
};