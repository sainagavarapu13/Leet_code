class Solution {
public:
    bool canCross(vector<int>& a) {
        unordered_set<int>st;
        for(int i=0;i<a.size();i++){
            st.insert(a[i]);
        }
        queue<pair<int,int>>q;
        int n=a.back();
           set<pair<int,int>> vis;
           vis.insert({0,0});
        q.push({0,0});
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            for(int i=y-1;i<=y+1;i++){
                if(i>0){
                    int nxt = x+i;
                    if(x+i==n) return true;
                    if(st.count(x+i)){

                        if(!vis.count({x+i,i})){
                            vis.insert({x+i,i});
                            q.push({x+i,i});
                        }
                    }
                }
            }
        }
        return false;
    }
};

