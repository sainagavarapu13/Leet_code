class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int p=1,flag=0;
        for(int i=0;i<a.size();i++){ 
            if(a[i]!=0){
            p=p*a[i];
           
            }
            else flag++;
        }
        vector<int>ans;
        for(int i=0;i<a.size();i++){
           if(flag>1){
            ans.push_back(0);
           }
           else if(flag==1){
            if(a[i]==0) ans.push_back(p);
            else ans.push_back(0);
           }
           else if(flag==0){
            ans.push_back(p/a[i]);
           }
        }
        return ans;
    }
};