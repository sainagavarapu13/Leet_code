class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& a, int k) {
        int n=a.size();
        int m = a[0].size();
        int ele = n*m;
        int sh = k%ele;
        if(sh==0) return a;
        // vector<vector<int>>res(n,vector<int>(m));
        vector<int>temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp.push_back(a[i][j]);
            }
        }
        vector<int>ans;
        int start = ele-sh;
        for(int i=start;i<ele;i++){
            ans.push_back(temp[i]);
        }
        for(int i=0;i<start;i++){
             ans.push_back(temp[i]);
        }
       // for(auto & i:ans) cout<<i<<" ";
        int idx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j] = ans[idx++];
            }
        }
        return a;
    }
};