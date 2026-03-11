class Solution {
public:
    vector<int> gridIllumination(int n, vector<vector<int>>& l, vector<vector<int>>& q) {
        
        unordered_map<int,int> c, r, a, b;
        unordered_set<long long> s;

        for(auto i : l){
            int x = i[0], y = i[1];
            long long key = 1LL * x * n + y;

            if(s.count(key)) continue;
            s.insert(key);

            r[x]++;
            c[y]++;
            a[x+y]++;
            b[x-y]++;
        }

        vector<int> ans;

        vector<pair<int,int>> dir = {
            {-1,-1},{-1,0},{-1,1},
            {0,-1},{0,0},{0,1},
            {1,-1},{1,0},{1,1}
        };

        for(auto i : q){

            int x = i[0];
            int y = i[1];

            if(r[x] > 0 || c[y] > 0 || a[x+y] > 0 || b[x-y] > 0)
                ans.push_back(1);
            else
                ans.push_back(0);

            for(auto d : dir){
                int nx = x + d.first;
                int ny = y + d.second;

                if(nx >= 0 && ny >= 0 && nx < n && ny < n){

                    long long key = 1LL * nx * n + ny;

                    if(s.count(key)){
                        s.erase(key);
                        r[nx]--;
                        c[ny]--;
                        a[nx+ny]--;
                        b[nx-ny]--;
                    }
                }
            }
        }

        return ans;
    }
};