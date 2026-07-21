class NumArray {
public:
    vector<int>a,pre;
    NumArray(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            a.push_back(nums[i]);
            sum+=a[i];
            pre.push_back(sum);
        }
    }
    int sumRange(int left, int right) {
        if(left==0)
        return pre[right];
         return pre[right]-pre[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */