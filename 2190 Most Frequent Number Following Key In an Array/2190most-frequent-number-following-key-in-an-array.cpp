class Solution {
public:
    int mostFrequent(vector<int>& a, int k) {
       map<int ,int>m;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]==k){
                m[a[i+1]]++;
            }
        }
        int maxx=-1,ans;
        for(auto& [n,c]:m){
            if(c>maxx){
                maxx=c;
                ans=n;
            }
        }
        return ans;
    }
};