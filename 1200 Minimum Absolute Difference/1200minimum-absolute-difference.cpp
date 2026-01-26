class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        int m=INT_MAX;
        sort(a.begin(),a.end());
        for(int i=1;i<a.size();i++){
               m=min(m,abs(a[i]-a[i-1]));
        }
        vector<vector<int>>ans;
        for(int i=1;i<a.size();i++){
                if(m==(abs(a[i]-a[i-1]))){
                    ans.push_back({a[i-1],a[i]}); 
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};