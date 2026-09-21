class NumArray {
public:
    vector<int>t;
    int n;
    NumArray(vector<int>& nums) {
        t.resize(4*nums.size());
        n = nums.size();
        build(1,nums,0,nums.size()-1);

    }
    void build(int node, vector<int>& nums, int start, int end){
        if( start == end){
            t[node] = nums[start];
            return;
        }
        int mid = (start+end)/2;
        build(2*node, nums, start, mid);
        build(2*node+1, nums, mid+1, end);
        t[node] = t[2*node]+t[2*node+1];
    }
    void update(int index, int val) {
       update_ind(1, 0, n-1, index, val);
    }
    void update_ind(int node, int start, int end, int index, int val){
         if(  start == end){
            t[node] = val;
            return;
        }
        int mid = (start+end)/2;
       if(index <= mid){
            update_ind(2*node, start, mid, index, val);
        }else{
             update_ind(2*node+1, mid+1, end, index, val);
        }
        t[node]= t[2*node] + t[2*node+1];
    }
    
    int sumRange(int left, int right) {
        return sum_range(1,0,n-1,left, right);
    }
    int sum_range(int node, int start, int end, int l, int r){
        if( l>end || r<start) return 0;
        if( l<=start && end<=r){
            return t[node];
        }
        int mid = (start+end)/2;
        int left = sum_range(2*node,start, mid, l, r);
        int right = sum_range(2*node+1, mid+1, end, l, r);
        return left+right;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */