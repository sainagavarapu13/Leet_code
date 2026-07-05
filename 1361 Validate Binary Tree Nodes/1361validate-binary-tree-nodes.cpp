class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& l, vector<int>& r) {
        map<int, int>in;
        for( int i=0;i<l.size();i++){
            if( l[i]!=-1){
                in[l[i]]++;
                if( in[l[i]]>=2) return 0;
            }
        }
        for( int i=0;i<r.size();i++){
            if( r[i]!=-1){
                in[r[i]]++;
                if( in[r[i]]>=2) return 0;
            }
        }
       int root =-1;
        for( int i=0;i<n;i++){
            if( in[i]==0){
                if(root!=-1) return 0;
                root = i;
            }
        }
        int cnt=0;
        if( root ==-1) return 0;
        queue<int>q;
        set<int>v;
        q.push(root);
        v.insert(root);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;
            if(l[node]!=-1){
                if(!v.count(l[node])){
                    v.insert(l[node]);
                    q.push(l[node]);
                }else return 0;
            }
            if( r[node]!=-1){
                if(!v.count(r[node])){
                    v.insert(r[node]);
                    q.push(r[node]);
                }else return 0;
            }
        }
        return cnt ==n;

    }
};