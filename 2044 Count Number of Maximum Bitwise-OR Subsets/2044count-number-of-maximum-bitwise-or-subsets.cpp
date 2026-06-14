class Solution {
public:
int ans=0;
    void check(int idx,vector<int>&a , int maxi , int pre){
        if(idx==a.size()){
            if(maxi==pre) ans++;
            return;
        }
        
        check(idx+1,a,maxi,pre|a[idx]);
        check(idx+1,a,maxi,pre);
    }
    int countMaxOrSubsets(vector<int>& a) {
        int maxi=0;
        for(int i=0;i<a.size();i++){
            maxi=maxi|a[i];
        }
        ans=0;
        cout<<maxi;
        check(0,a,maxi,0);
        return ans;
    }
};