class Solution {
public:
int fun( vector<int>& nums, int k){
    int j=0;
    map<int,int>m;
    int cnt=0;
    for( int i=0;i<nums.size();i++){
        if( m[nums[i]]==0) k--;
        m[nums[i]]++;
        while( k<0 && j<nums.size()){
            m[nums[j]]--;
            if(m[nums[j]]==0)k++;
            j++;
        }
        cnt+=(i-j+1);

    }
    return cnt;

}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return fun(nums,k)-fun( nums,k-1);
    }
};