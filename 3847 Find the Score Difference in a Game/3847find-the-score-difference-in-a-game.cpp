class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n = nums.size(),i=0;
        long long a = 0,b = 0;
        bool flag = true;
        while(i<nums.size()){
            if(nums[i]%2!=0){
                flag = !flag;
            }
            if(i%6==5) flag = !flag;
            if(flag) a+=nums[i];
            else b+=nums[i];
            cout<<a<<" "<<b<<endl;
            i++;
        }
        int res = a-b;
        return res;
    }
};