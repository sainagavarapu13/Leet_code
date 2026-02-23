class Solution {
public:
    vector<int> longestCommonPrefix(vector<string>& a) {
        int n=a.size();
        if(n==1) return {0};
        vector<int>pre,d_suff(a.size()-1),d_pre ,ans;
        for(int i=0;i<a.size()-1;i++){
           string s = a[i];
           string t = a[i+1];
           int p =0;
           int len=min(s.size(),t.size());
           while(p<len){
            if(s[p]==t[p]){
                p++;
            }
            else break;
           }
           pre.push_back(p);
        }
       
        d_pre.push_back(pre[0]);
        for(int i=1;i<pre.size();i++){
            d_pre.push_back(max(d_pre.back(),pre[i]));
        }
        d_suff[d_suff.size()-1] = pre.back();
        for(int i=d_suff.size()-2;i>=0;i--){
            d_suff[i]=max(d_suff[i+1],pre[i]);
        }
        for(int i=0;i<a.size();i++){
            int maxi=0;
            if(i-2 >= 0 && i+1 <d_suff.size())
             maxi = max(d_pre[i-2],d_suff[i+1]);
             else if(i-2 >=0){
               
                 maxi = d_pre[i-2];
             }
             else if(i+1<d_suff.size()){
                maxi = d_suff[i+1];
             }
             if(i!=0 && i+1 <a.size()){
                 string s = a[i-1];
           string t = a[i+1];
           int p =0;
           int len=min(s.size(),t.size());
           while(p<len){
            if(s[p]==t[p]){
                p++;
            }
            else break;
           }
           maxi = max(maxi,p);
         }
         ans.push_back(maxi);
        }
        return ans;
    }
};