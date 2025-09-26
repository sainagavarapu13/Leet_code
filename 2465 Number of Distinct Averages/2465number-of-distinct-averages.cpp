class Solution {
public:
    int distinctAverages(vector<int>& a) {
        sort(a.begin(),a.end());
        int start=0,end=a.size()-1;
        set<float>set;
        while(start<end){
            float avg=(a[start]+a[end]);
            cout<<a[start]<<" "<<a[end]<<"\n";
            set.insert(avg);
            start++;
            end--;
        }
        for(auto& i:set) cout<<i<<" ";
        return set.size();
    }
};