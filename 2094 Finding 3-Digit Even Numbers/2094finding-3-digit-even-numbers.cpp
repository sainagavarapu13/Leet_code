class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& a) {
        int i,j,k;
        set<int>ans;
        for(i=0;i<a.size();i++){
            for(j=0;j<a.size();j++){
                for(k=0;k<a.size();k++){
                    if(i==j||j==k||i==k||a[k]%2==1||a[i]==0) continue;
                    else 
                    ans.insert(a[i]*100+a[j]*10+a[k]);
                }
            }
        }
        vector<int>ANS;
        for(auto& i:ans) ANS.push_back(i);
        sort(ANS.begin(),ANS.end());
        return ANS;
    }
};