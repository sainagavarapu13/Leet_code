class Solution {
public:
    long long maxSum(vector<vector<int>>& a, vector<int>& t, int k) {
       priority_queue<int>q;
       for( int i=0;i<a.size();i++){
        vector<int>v;
        for( int j =0;j<a[i].size();j++){
           v.push_back(a[i][j]);
        }
        sort( v.begin(),v.end(),greater<int>());
        for( int j=0;j<t[i];j++){
            q.push(v[j]);
        }
       }
        long long sum=0;
        while( !q.empty() && k--){
            sum+=q.top();
            q.pop();

        }
        return sum;
    }
};