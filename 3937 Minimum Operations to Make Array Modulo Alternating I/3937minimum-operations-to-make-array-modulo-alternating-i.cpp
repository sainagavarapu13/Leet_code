class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size(),ans = INT_MAX;
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                if(i==j) continue;
                int c = 0;
                for(int x=0;x<n;x++){
                    int r = nums[x]%k;
                    if(x%2==0){
                        int diff = abs(r-i);
                        c += min(diff,k-diff);
                    }
                    else{
                        int diff = abs(r-j);
                        c += min(diff,k-diff);
                    }
                }
                ans = min(ans,c);
            }
        }
        return ans;
    }
};