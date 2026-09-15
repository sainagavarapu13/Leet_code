class Solution {
public:
set<int>set;
void check(vector<int>& a , int idx , vector<int>& vis,long long  ls){
    if(ls>999) return;
    if(ls>=100&&ls<=999){
        if(ls%2==0){
            set.insert(ls);
            
        }
        return ;
    }
    for(int i = 0;i<a.size();i++){
        if(vis[i]==1) continue;
        vis[i] = 1;
        check(a,idx+1,vis,ls*10+a[i]);
        vis[i] = 0;
    }
}
    int totalNumbers(vector<int>& a) {
        int n = a.size();
        set.clear();
        vector<int>vis(n,0);
        check(a,0,vis,0);
        return set.size();
    }
};