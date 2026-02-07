class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN,count = 1;
        for(int mask = 0;mask<(1<<n);mask++){
            long long or_max = 0;
            for(int j=0;j<n;j++){
                if(mask & (1<<j)){
                    or_max = or_max|nums[j];
                }
            }
                if(or_max>maxi){
                    maxi = or_max;
                    count = 1;
                }
                else if(or_max==maxi){
                    count++;
                }
        }
        return count;
    }
};