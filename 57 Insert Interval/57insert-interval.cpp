class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        vector<vector<int>>ans;
        int i=0;
         bool used = false;
        while(i<a.size()){
            int start=a[i][0];
            int end=a[i][1];
            if(end<b[0]){
                ans.push_back({start,end});
            }
            else if(start>b[1]){
                if(!used){
                    ans.push_back(b);
                    used=true;
                }
                ans.push_back({start,end});
            }
            else{
                start = min(start, b[0]);
                end=max(end,b[1]);
            while(i+1<a.size()&&end>=a[i+1][0]){
                end=max(end,a[i+1][1]);
                i++;
            }
            ans.push_back({start,end});
            used=true;
            }
            i++;
        }
         if(!used) {
            ans.push_back(b);
        }
        return ans;
    }
};