class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        unordered_set<int>num(nums.begin(),nums.end());
        if( num.size()==1) return *num.begin();
        if( num.size()==2) return max(*num.begin(),*next(num.begin()));
        priority_queue<int,vector<int>,greater<>>a;
        for( int i : num){
            a.push(i);
            if( a.size()>3) a.pop();
        }
        return a.top();
    }
};