class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        set<int> s;
        for(int i=0;i<tasks.size();i++){
            s.insert(tasks[i][0]+tasks[i][1]);
        }
        return *s.begin();
    }
};