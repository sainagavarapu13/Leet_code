class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        sort(a.begin(),a.end());
        int k=1;
        int n=a.size();
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            if(ans.empty())
           ans.push_back(a[i]);
           if(ans.back()==a[i]) continue;
           else ans.push_back(a[i]);
        }
        a.clear();
        int i=0;
        while(k<=n&&i<n){
            if(i<ans.size()&&k==ans[i]) {
                i++;
            }
            else {
                a.push_back(k);
            }
            k++;
        }
        return a;
    }
};