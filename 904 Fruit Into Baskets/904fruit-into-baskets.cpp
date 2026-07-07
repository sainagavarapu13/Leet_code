class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int res = 0;
        int n = nums.size(),i=0,j=0,b=nums[0],c,a=0,s=0,d=0;
        while(i<n && j<n){
            if(nums[i]==b) {
                d = i;
                a++;
                i++;
            }
            else if(s==0 || c==nums[i]){
                if(s==0) j = i;
                a++;
                c = nums[i];
                s = 1;
                i++;
            }
            else{
                res = max(res,a);
                b = nums[j];
                s = 0;
                a = 1;
                i = j+1;
                if(res>n/2) return res;
            }
            res = max(a,res);
        }
        return res;
    }
};