class Solution {
public:
    long long maximumScore(vector<int>& a, string s) {
        priority_queue<int>q;
        long long ans=0;
        for( int i=0;i<a.size();i++){
            q.push(a[i]);
            if(s[i]=='1'){
                ans+=q.top();
                q.pop();

            }
        }
        return ans;
    }
};