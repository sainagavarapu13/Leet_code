class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        int e=0,i=0;
        while(i<a.size()){
            int start=a[i][0];
            int end=a[i][1];
            while(i+1<a.size()&&a[i+1][0]<=end){
                end=max(end,a[i+1][1]);
            i++;
            }
            ans.push_back({start,end});
           
            i++;
        }
        return ans;
    }
};