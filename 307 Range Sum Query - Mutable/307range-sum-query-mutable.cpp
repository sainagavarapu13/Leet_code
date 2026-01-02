class NumArray {
    vector<int> nums;
    vector<int> prefix;
public:
    NumArray(vector<int>& nums) {
        this->nums = nums;
        prefix.resize(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
        prefix[i+1] = prefix[i] + nums[i];
        }
    }
    
    void update(int index, int val) {
        int a = nums[index];
        nums[index] = val;
        for(int i=index+1;i<prefix.size();i++){
            prefix[i] += val-a; 
        }
    }
    
    int sumRange(int left, int right) {
        if(left+right==0){
            return prefix[1];
        }
        else{
            cout<<prefix[left]<<" "<<prefix[right+1]<<endl;
            return prefix[right+1]-prefix[left];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */