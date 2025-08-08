class Solution {
public:
    vector<string> topKFrequent(vector<string>& a, int k) {
        map<string,int>m;
       for(int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        for(auto&[n,c]:m){
            cout<<n<<" "<<c<<"\n";
        }
        int maxx=-1;
        string ans;
         vector<string>res;
   
       while(k--){
        ans="";
            maxx=-1;
        for(auto&[n,c]:m){
            
            if(c>maxx&&find(res.begin(),res.end(),n)==res.end()){
                maxx=c;
                ans=n;
            }
        }
        res.push_back(ans);
       }
       return res;
    }
};