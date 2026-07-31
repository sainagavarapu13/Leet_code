class Solution {
public:
    bool dfs(int ind,vector<int>& g, int k,int limit,  vector<int>& w){
        if( ind== g.size()) return true;
        for( int i=0;i<k;i++){
            if(i>0 && w[i]==w[i-1]) continue;
            if(w[i]+g[ind]<=limit){
                w[i]+=g[ind];
               if( dfs(ind+1,g,k,limit,w)) return 1;
               w[i]-=g[ind];

            }
            if( w[i]==0) break;
        }
        return false;
    } 
    int minSessions(vector<int>& tasks, int limit) {
        int l = 1;
        int h = tasks.size();
        int ans = 0;
        while(l<=h){
            int mid =(l+h)/2;
            vector<int>w(mid,0);
            if( dfs(0,tasks,mid, limit ,w)){
                ans = mid;
                h = mid-1;
            }else l =mid+1;
        }
        return ans;
    }
};