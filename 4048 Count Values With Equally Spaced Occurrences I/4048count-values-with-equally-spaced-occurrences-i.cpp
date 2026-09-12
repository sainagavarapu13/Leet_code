class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size(),res = 0;
        map<int,int> m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(int i=0;i<n;i++){
            if(m[nums[i]]!=3) continue;
            for(int j = i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k]){
                        if((j-i)==(k-j)) res++;
                    }
                }
            }
        }
        return res;
    }
};