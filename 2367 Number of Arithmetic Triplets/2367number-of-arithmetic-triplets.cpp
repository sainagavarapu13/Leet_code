class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int max = 0,i=0,j=0,k=0,b=nums.size(),c;
        int freq[50] = {0};
        for(i=0;i<b;i++){
            for(j=i+1;j<b;j++){
                for(k=j+1;k<b;k++){
                    if(((nums[j]-nums[i]==diff)&&(nums[k]-nums[j]==diff)) && i<j && j<k){
                        max++;
                    }
                }
            }
        }
        return max;
    }
};