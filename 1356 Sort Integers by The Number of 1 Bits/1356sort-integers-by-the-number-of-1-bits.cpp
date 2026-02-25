class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        vector<pair<int,int>> u(n,{0,0});
        for(int i=0;i<n;i++){
            u[i].first = __builtin_popcount(arr[i]);
            u[i].second = arr[i];
        }
        sort(u.begin(),u.end());
        for(int i=0;i<n;i++){
            arr[i] = u[i].second;
        }
        return arr;
    }
};