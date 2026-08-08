class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>p;
        for( int i : nums){
            p.push(i);
        }
        long long cnt=0;
        while(k--){
           cnt+=p.top();
            int present = p.top();
            p.pop();
            p.push((present+3-1)/3);
            
        }
        return cnt;
    }
};