class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>>res;
        int i=0, j=0;
        while( i<a.size() && j < b.size()){
            int val=0;
            if(a[i][0]<b[j][0]){
                res.push_back({a[i][0],a[i][1]+b[j][1]});
                i++;
            }
            else if(a[i][0]>b[j][0]){
                res.push_back({b[j][0],a[i][1]+b[j][1]});
                j++;
            }
            else{
                res.push_back({a[i][0],a[i][1]+b[j][1]});
                i++;
                j++;
                
            }
        }
        while(i<a.size()){
             res.push_back({a[i][0],a[i][1]});
                i++;
        }
        while(j<b.size()){
             res.push_back({b[j][0],b[j][1]});
                j++;
        }
        return res;
    }
};
