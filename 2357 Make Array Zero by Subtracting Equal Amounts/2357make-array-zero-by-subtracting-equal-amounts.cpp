class Solution {
public:
    void makezero(vector<int>& a,int k){
        int ans;
         for(int i=0;i<a.size();i++){
           if(a[i]!=0) a[i]=a[i]-k;
        }
    }
    int minimumOperations(vector<int>& a) {
        sort(a.begin(),a.end());
        int ans,cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=0){
                cnt++;
                makezero(a,a[i]);
            }
        }
        return cnt;
    }
};