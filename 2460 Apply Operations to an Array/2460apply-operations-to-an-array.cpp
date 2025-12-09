class Solution {
public:
    vector<int> applyOperations(vector<int>& a) {
        int i,f=0;
        int n=a.size()-1;
        // while(n--){
        //     f=0;
        for(i=0;i<a.size()-1;i++){
            if(a[i]==a[i+1]){
                a[i]=a[i]*2;
                a[i+1]=0;
                f=1;
            }
        }
        // if(!f) break;
     //}
     vector<int>ans;
     for(int i=0;i<a.size();i++){
        if(a[i]!=0){
            ans.push_back(a[i]);
        }
     }
     while(ans.size()<a.size()){
        ans.push_back(0);
     }
     return ans;
    }
};