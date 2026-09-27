class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        map<pair<int,int>,int> m;
        int a = 0,res = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) res++;
            else{
                if(nums[i]>nums[i+1]) m[{nums[i+1],nums[i]}]++;
                else m[{nums[i],nums[i+1]}]++;
            }
        }
        for(auto [p,q]:m){
            a = max(a,q);
        }
        return a+res;
    }
};