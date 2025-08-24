class Solution {
public:
    int size(vector<int>a,int k){
        int i,cnt=0,m=-1;
        for(i=0;i<a.size();i++){
            if(i==k) continue;
            if(a[i]==1){
                cnt++;
            }
            else if(a[i]==0) cnt=0;
            m=max(m,cnt);
        }
        return m;
    }
    int longestSubarray(vector<int>& a) {
        if(find(a.begin(),a.end(),0)==a.end()) return a.size()-1;
        else if(find(a.begin(),a.end(),1)==a.end()) return 0;
        int i,m=-1;
        for(i=0;i<a.size();i++){
            if(a[i]==0){
                int ans =size(a,i);
                m=max(ans,m);
            }
        }
        return m;
    }
};