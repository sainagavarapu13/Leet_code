class Solution {
public:
    int digitRange(int x){
        int mn=9,mx=0;
        while(x>0){
            int d=x%10;
            mn=min(mn,d);
            mx=max(mx,d);
            x/=10;
        }
        return mx-mn;
    }
    int maxDigitRange(vector<int>& nums){
        int maxRange=-1,ans=0;
        vector<int>ranges;
        for(int x:nums){
            int r=digitRange(x);
            ranges.push_back(r);
            maxRange=max(maxRange,r);
        }
        for(int i=0;i<nums.size();i++){
            if(ranges[i]==maxRange)
                ans+=nums[i];
        }
        return ans;
    }
};