class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>>ans;
        if(a.empty()||b.empty()) return ans;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            int start ,end;
            for(int j=0;j<b.size();j++){
                  start = max(a[i][0],b[j][0]);
                  end = min(a[i][1],b[j][1]);
                  if(start <= end) {
                    ans.push_back({start, end});
                }
            }
           
        }
        return ans;
    }
};