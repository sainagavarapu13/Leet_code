class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ops = 0,n= nums.size(),st=0;
        unordered_set<int>seen;
        int i = n-1;
        while(i>=0){
            if(seen.count(nums[i])){
                break;
            }
            seen.insert(nums[i]);
            i--;
        }
        if(i==-1) return 0;
        return (i/3)+1;
    }
};