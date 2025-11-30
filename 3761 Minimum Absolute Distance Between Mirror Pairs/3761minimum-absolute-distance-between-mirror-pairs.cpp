class Solution {
public:
     int rev(int x){
        int r=0;
        while(x){
             int q=x%10;
              r=r*10+q;
            x/=10;
        }
        return r;
    }
int fun(vector<int>& nums){
    unordered_map<int,int> p;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(p.count(nums[i])){
                ans=min(ans,i-p[nums[i]]);
            }
            int r=rev(nums[i]);
            p[r]=i;
        }
        if(ans==INT_MAX) return -1;
        return ans;

}
    int minMirrorPairDistance(vector<int>& nums) {
        return fun(nums);
    }
};