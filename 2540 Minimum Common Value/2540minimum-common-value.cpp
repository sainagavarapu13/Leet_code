class Solution {
public:
    int getCommon(vector<int>& a, vector<int>& b) {
        set<int>set;
        for(auto & i:b){
            set.insert(i);
        }
        for(int i=0;i<a.size();i++){
            if(set.count(a[i])) return a[i];
        }
        return -1;
    }
};