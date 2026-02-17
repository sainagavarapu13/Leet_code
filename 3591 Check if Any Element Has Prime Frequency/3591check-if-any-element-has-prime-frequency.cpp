class Solution {
public:
    bool isp(int val){
        if(val<=1) return false;
        for(int  i =2;i*i<=val;i++){
            if(val%i==0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int> v(101,0);
        int a = INT_MIN,b = INT_MAX;
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
            a = max(a,nums[i]);
            b = min(b,nums[i]);
        }
        for(int i = b;i<=a;i++){
            if(v[i]>1){
                if(isp(v[i])){
                    return true;
                }
            }
        }
        return false;
    }
};