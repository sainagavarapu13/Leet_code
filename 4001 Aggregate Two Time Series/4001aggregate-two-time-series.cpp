class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& a, vector<vector<int>>& b) {
        int i=0,j=0;
        vector<vector<int>>ans;
        while(i<a.size()&&j<b.size()){
            if(a[i][0]<b[j][0]){
                ans.push_back({a[i][0],a[i][1]+b[j][1]});
                i++;
            }
            else if(a[i][0]>b[j][0]){
                ans.push_back({b[j][0],a[i][1]+b[j][1]});
                j++;
            }
            else{
                ans.push_back({a[i][0],a[i][1]+b[j][1]});
                i++;
                j++;
            }
        }
        while(i<a.size()){
            ans.push_back({a[i][0],a[i][1]});
            i++;
        }
        while(j<b.size()){ ans.push_back({b[j][0],b[j][1]});j++;}
        return ans;
    }
};