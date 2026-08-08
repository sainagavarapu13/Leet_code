class NumArray {
public:
    vector<int>temp,val;

    void build(int node,int start,int end){
        if(start==end){
            temp[node] = val[start];
            return ;
        }
        int mid = (start+end)/2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        temp[node] = temp[2*node]+temp[2*node+1]; 
        return ;
    }
    NumArray(vector<int>& a) {
        int n=a.size();
        temp.clear();
        val.clear();
        temp.resize(4*n);
        val.resize(n);
        val=a;
        build(1,0,n-1);
    }
    void Update(int node, int start, int end, int idx, int val){
            if(start == end)
            {
                temp[node] = val;
                return;
            }
            int mid = (start + end) / 2;
            if(idx <= mid)
                Update(2*node, start, mid, idx, val);
            else
                Update(2*node+1, mid+1, end, idx, val);

            temp[node] = temp[2*node] + temp[2*node+1];
            return;
    }
    void update(int idx, int v) {
        Update(1,0,val.size()-1,idx,v);
    }
    int get(int l,int r,int s,int e , int node){
        if(r<s||e<l){
           return 0;
        }
        else if(s<=l&&r<=e){
           return temp[node];
        }
        int mid = (l + r) / 2;

        return get(l, mid, s, e, 2*node)
         + get(mid+1, r, s, e, 2*node+1);

    }
    int sumRange(int l, int r) {
        return get(0,val.size()-1,l,r,1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */