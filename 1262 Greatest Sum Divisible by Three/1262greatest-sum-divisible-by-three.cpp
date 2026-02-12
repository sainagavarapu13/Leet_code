class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> v;
        vector<int> u;
        int n = nums.size();
        int res = 0;
        for(int i=0;i<n;i++){
            int a = nums[i]%3;
            res += nums[i];
            if(a==1) {
                v.push_back(nums[i]);
            }
            if(a==2) u.push_back(nums[i]);
        }
        if(res%3==0) return res;
        sort(v.begin(),v.end());
        sort(u.begin(),u.end());
        int ans = 0;
        if(res%3==1){
            int s = (v.size()>=1) ? res - v[0]: 0;
            int p = (u.size()>=2) ? res - u[0]-u[1] : 0;
            ans = max(s,p);
        }
        else{
            int s = (u.size()>=1) ? res - u[0] : 0;
            int p = (v.size()>=2) ? res - v[0]-v[1] : 0;
            ans = max(s,p);
        }
        return ans;
    }
};