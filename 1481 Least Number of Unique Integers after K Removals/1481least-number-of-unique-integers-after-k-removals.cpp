class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> m;
        int n = arr.size();
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto x:m){
            v.push_back({x.second,x.first});
        }
        sort(v.rbegin(),v.rend());
        while(k>0 && v.size()>0){
            if(v[v.size()-1].first<=k){
                k -= v[v.size()-1].first;
                v.erase(v.end());
            }
            else{
                break;
            }
        }
        return v.size();
    }
};