class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<>>a;
        for(int i:nums){
            
            a.push(i);
            if(a.size()>k){
                a.pop();
            }
        }

    return a.top();
    }
};