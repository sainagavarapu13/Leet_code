class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& a) {
        vector<int> ans;

        for (int i = 0; i < a.size(); i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < a[i].size(); j+=2) {
                    ans.push_back(a[i][j]);
                }
            } else {
                vector<int>re;
                for (int j = 1; j < a[i].size(); j+=2) {
                    re.push_back(a[i][j]);
                }
                for( int i=re.size()-1;i>=0;i--){
                    ans.push_back(re[i]);
                }
            }
        }

        return ans;
    }
};
