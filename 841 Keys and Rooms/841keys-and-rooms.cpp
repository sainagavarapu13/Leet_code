class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> vis(rooms.size(), 0);
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        while (!q.empty()) {
            int room = q.front();
            q.pop();
            for (int key : rooms[room]) {
                if (!vis[key]) {
                    vis[key] = 1;
                    q.push(key);
                }
            }
        }
        for (int x : vis)
            if (!x)
                return false;

        return true;
    }
};