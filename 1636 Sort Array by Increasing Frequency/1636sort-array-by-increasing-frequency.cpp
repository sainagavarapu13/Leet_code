class Solution {
public:
    vector<int> frequencySort(vector<int>& s) {
   
        map<int,int>arr;
        for( int c:s){
            arr[c]++;
        }
        vector<pair<int,int>>a(arr.begin(),arr.end());
        sort(a.begin(),a.end(),[](auto& x,auto&y){
            if( x.second==y.second) return x.first > y.first;
            else return x.second< y.second;
        });
        vector<int> b;
        for( auto& i:a){
            int k = i.second;
            while(k--) b.push_back(i.first);
        }
        return b;
    
    }
};