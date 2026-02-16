class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int res = 0;
        for(int i= rungs.size()-1;i>=0;i--){
            int a = (i!=0) ? (rungs[i]-rungs[i-1]) : rungs[i];
            if(a>dist){
                res += (a-1)/dist;
            }
        }
        return res;
    }
};