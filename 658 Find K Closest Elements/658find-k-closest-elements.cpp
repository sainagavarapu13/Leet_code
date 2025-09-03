class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        vector<pair<int,int>>diff;
        for(int i=0;i<a.size();i++){
            diff.push_back({abs(a[i]-x),a[i]});
        }
        sort(diff.begin(),diff.end());
        vector<int>ans;
        int i=0;
        while(k--){
            ans.push_back(diff[i].second);
            i++;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};