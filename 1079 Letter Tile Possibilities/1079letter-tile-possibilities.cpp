class Solution {
public:
set<string>set;
void check(vector<int>& vis , string a, string temp){
    if(temp.size()>0){
        set.insert(temp);
      
    }
    for(int i=0;i<a.size();i++){
        if(vis[i]==1) continue;
        vis[i]=1;
         check(vis,a,temp+(a[i]));
         vis[i]=0;
    }
}
    int numTilePossibilities(string a) {
       set.clear();
       int n=a.size();
       vector<int>vis(n,0);
       string temp;
       check(vis,a,temp);
       return set.size();
    }
};