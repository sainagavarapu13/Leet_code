class Solution {
public:
    int ans=0;
    void check(int idx , vector<int>&a,int x){
        if(idx==a.size()){
            ans+=x;
            return;
        }
        check(idx+1,a,x^a[idx]);
        check(idx+1,a,x);
    }
    int subsetXORSum(vector<int>& a) {
        ans=0;
        check(0,a,0);
        return ans;
    }
};