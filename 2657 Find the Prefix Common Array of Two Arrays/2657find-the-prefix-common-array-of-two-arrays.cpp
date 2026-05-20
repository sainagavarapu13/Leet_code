class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        map<int,int>m1,m2;
        int cnt=0;
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            m1[a[i]]++;
            m2[b[i]]++;
            if(a[i]==b[i]){
                cnt++;
            }
            else{
                 if(m2[a[i]]>0){
                cnt++;
            }
            if(m1[b[i]]>0){
                cnt++;
            }
            }
           
            ans.push_back(cnt);
        }
        return ans;
    }
};