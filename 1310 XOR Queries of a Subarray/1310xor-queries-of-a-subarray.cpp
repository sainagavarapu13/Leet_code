class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        vector<int>pre(a.size());
        vector<int>ans;
        pre[0]=a[0];
        for( int i=1;i<a.size();i++){
            pre[i] = pre[i-1]^a[i];
        }
        for( auto i : q){
           int left = i[0];
            int right = i[1];
            if (left == 0)
                ans.push_back(pre[right]);
            else
                ans.push_back(pre[left-1]^pre[right]);
        }
        return ans;

    }
};