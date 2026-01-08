class Solution {
public:
    bool fun(vector<int> v,int o,int s){
        long long op = 0;
        for(int n:v){
            op += (n-1)/s;
            if(op>o) return false;
        }
        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int left =1,right = *max_element(nums.begin(),nums.end());
        while(left<right){
            int mid = (left+right)/2;
            if(fun(nums,maxOperations,mid))
                right = mid;
                else{
                    left = mid +1;
                }
        }
        return left;
    }
};