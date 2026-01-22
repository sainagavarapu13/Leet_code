class Solution {
public:
    bool des(vector<int> v){
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>v[i+1]){
                return false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int b=0;
        while(!des(nums)){
            int n = nums.size();
            int min = INT_MAX;
            int idx = 0;
            for(int i=0;i<n-1;i++){
                int s = nums[i]+nums[i+1];
                if(s<min){
                    min = s;
                    idx = i;
                }
            }
            nums[idx] = min;
            nums.erase(nums.begin()+idx+1);
            ++b;
        }
        return b;
    }
};