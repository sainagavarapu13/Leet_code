class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        map<int,int> m;
        for(int f:friends){
            m[f]++;
        }
        vector<int> a;
        for(int o:order){
            if(m[o]) a.push_back(o);
        }
        return a;
    }
};