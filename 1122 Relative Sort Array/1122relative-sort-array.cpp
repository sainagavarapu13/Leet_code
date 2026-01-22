class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr, vector<int>& arr2) {
        map<int,int> m;
        map<int,int> n;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(int j=0;j<arr2.size();j++){
            n[arr2[j]]++;
            // cout<<"-"<<arr2[j]<<" "<<n[arr2[j]]<<endl;
        }
        vector<int> v,u;
        for(int i=0;i<arr2.size();i++){
            // cout<<arr2[i]<<" "<<n[arr2[i]]<<" "<<m[arr2[i]]<<endl;
            if(n[arr2[i]]>0){
                int b = m[arr2[i]];
                for(int j=0;j<b;j++){
                    v.push_back(arr2[i]);
                    m[arr2[i]]--;
                }
            }
        }
        for(auto x:m){
            if(x.second>0){
                for(int i=0;i<x.second;i++){
                    v.push_back(x.first);
                }
            }
        }
        return v;
    }
};