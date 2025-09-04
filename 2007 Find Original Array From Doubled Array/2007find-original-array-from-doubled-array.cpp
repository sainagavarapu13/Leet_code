class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
        int n=a.size();
        if(n&1==1) return {};
        map<int,int>f;
        for(int i=0;i<n;i++){
            f[a[i]]++;
        }
        sort(a.begin(),a.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(f[a[i]]==0) continue;
            if(f[2*a[i]]==0) return {};
            f[a[i]]--;
            f[2*a[i]]--;
            ans.push_back(a[i]);
        }
        return ans;
    }
};