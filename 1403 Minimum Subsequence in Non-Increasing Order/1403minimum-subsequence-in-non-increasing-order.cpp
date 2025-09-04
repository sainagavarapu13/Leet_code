class Solution {
public:
    vector<int> minSubsequence(vector<int>& n) {
        int sum=0,cnt=0;
        vector<int>res;
        for( int i:n) sum+=i;
        sort(n.begin(),n.end(),greater<>());
        for( int i:n){
           cnt+=i;
           sum-=i;
            res.push_back(i);
           if( sum < cnt) return res;
        }
        return {};
    }
};