class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& l, vector<int>& r) {
        map<int,int>m;
        for(int i=0;i<l.size();i++){
            if(l[i]==-1) continue;
            m[l[i]]++;
        }
        for(int i=0;i<r.size();i++){
            if(r[i]==-1) continue;
            m[r[i]]++;
        }
        int root=-1,cnt=0;
        for(int i=0;i<n;i++){
            if(m[i]>1) return false;
            if(m[i]==0){
                 cnt++;
                if(cnt>=2) return false;
                root = i;
               
            }

        }
        if(root==-1) return false;
        vector<int>vis(n,0);
        int visi=1;
        vis[root]=1;

        queue<int>q;
        q.push(root);
        //cout<<root;
        
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(l[x]!=-1){
                if(vis[l[x]]==0){
                    vis[l[x]]=1;
                     q.push(l[x]);
                     visi++;
                }
                else return false;
               
            }
            if(r[x]!=-1){
                if(vis[r[x]]==0){
                    vis[r[x]]=1;
                    visi++;
                    q.push(r[x]);
                }
                else return false;
            }
        }
        return visi==n;
    }
};