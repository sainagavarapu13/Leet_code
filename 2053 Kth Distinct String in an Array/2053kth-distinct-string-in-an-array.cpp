class Solution {
public:
    string kthDistinct(vector<string>& a, int k) {
        map<string,int>m;
        for(auto& i:a){
           m[i]++;
        }
        int cnt =0 ;
        for(int i=0;i<a.size();i++){
            if(m[a[i]]==1){
                cnt++;
            }
            if(cnt==k){
                return a[i];
            }
        }
        return "";
    }
};