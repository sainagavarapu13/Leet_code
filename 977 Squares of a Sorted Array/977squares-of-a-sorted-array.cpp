class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        int mid =nums.size()-1;
        if(nums[0]>0){
            for(int k=0;k<nums.size();k++){
                nums[k] *=nums[k];
            }
            return nums;
        }
        if(nums[mid]<0){
            for(int k=nums.size()-1;k>=0;k--){
                v.push_back(nums[k]*nums[k]);
            }
            return v;
        }
        for(int k=0;k<nums.size();k++){
            if(nums[k]>=0){
                mid = k;
                break;
            }
        }
        int i = mid-1,j = mid;
        while(1){
            if(i<0 || j>=nums.size()){
                break;
            }
            // cout<<i<<" "<<j<<endl;
            if(abs(nums[i])<abs(nums[j])){
                v.push_back(nums[i]*nums[i]);
                i--;
            }
            else {
                v.push_back(nums[j]*nums[j]);
                j++;
            }
        }
        while(i>=0){
            v.push_back(nums[i]*nums[i]);
            i--;
        }
        while(j<nums.size()){
            v.push_back(nums[j]*nums[j]);
            j++;
        }
        return v;
    }
};