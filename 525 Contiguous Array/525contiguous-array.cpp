class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int res = 0;
        map<int,int> m;
        int sum = 0;
        m[0] = -1;
        for(int i=0;i<nums.size();i++){
            sum += nums[i]==0 ? -1 : 1;
            if(m.find(sum)!=m.end()){
                res = max(res,i-m[sum]);
            }
            else{
                m[sum] = i;
            }
        }
        return res;
    }
};