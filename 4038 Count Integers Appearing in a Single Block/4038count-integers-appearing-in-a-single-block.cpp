class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        map<int,int> m;
        int n= nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int a = 1;
        int res = 0;
        if(m[nums[0]]==a) res++;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                a++;
                if(m[nums[i]]==a) res++;
            }
            else{
                a = 1;
                if(m[nums[i]]==a)res++;
            }
        }
        return res;
    }
};