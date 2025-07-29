class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>> m;
        int x = 0, y = 0;
        
        while(x < a.size() && y < b.size()) {
            int s = a[x][0];
            int e = b[y][0];
            
            if(s == e) {
                m.push_back({s, a[x][1] + b[y][1]});
                x++;
                y++;
            }
            else if(s < e) {
                m.push_back({s, a[x][1]});
                x++;
            }
            else {
                m.push_back({e, b[y][1]}); 
                y++;
            }
        }
        
        while(x < a.size()) {
            m.push_back({a[x][0], a[x][1]});
            x++;
        }
        
        while(y < b.size()) {
            m.push_back({b[y][0], b[y][1]});
            y++;
        }
        
        return m;
    }
};