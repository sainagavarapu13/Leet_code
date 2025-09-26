class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& a, int key, int k) {
        int i;
        vector<int>idx,ans;
        for(i=0;i<a.size();i++){
            if(a[i]==key) idx.push_back(i);
        }
    for(i=0;i<a.size();i++){
        for(int j=0;j<idx.size();j++){
                if(abs(i-idx[j])<=k){
                    ans.push_back(i);
                    break;
                }
        }
        
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};