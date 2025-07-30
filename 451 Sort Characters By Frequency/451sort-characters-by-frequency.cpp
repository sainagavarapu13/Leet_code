class Solution {
public:
    string frequencySort(string s) {
        map<char,int>arr;
        for( char c:s){
            arr[c]++;
        }
        vector<pair<char,int>>a(arr.begin(),arr.end());
        sort(a.begin(),a.end(),[](auto& x,auto&y){
            return x.second> y.second;
        });
        string b;
        for( auto& i:a){
            b.append(i.second,i.first);
        }
        return b;
    }
};