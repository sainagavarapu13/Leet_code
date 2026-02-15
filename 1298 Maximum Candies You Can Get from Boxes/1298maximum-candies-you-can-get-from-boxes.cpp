class Solution {
public:
    int maxCandies(vector<int>& a, vector<int>& b, vector<vector<int>>& c, vector<vector<int>>& d, vector<int>& e) {
        queue<int>q;
        int n=a.size();
        vector<bool> owned(n, false);

        for(auto& i:e){
            q.push(i);
             owned[i] = true;
        }
        int sum=0;
        vector<bool>visited(a.size(),0);
        while(!q.empty()){
            int box = q.front();
            q.pop();
            if(visited[box]==1) continue;
           //  if(a[box] == 0) continue;
            if(a[box]==1){
                sum+=b[box];
                  visited[box] =1;
                for(auto& i :d[box]){
                    owned[i] = true;
                    if(!visited[i])
                    q.push(i);
                }
                for(auto& i:c[box]){
                    if(owned[i]&&!visited[i])
                   q.push(i);
                    a[i]=1;
                }
              
            }

        }
        return sum;
    }
};