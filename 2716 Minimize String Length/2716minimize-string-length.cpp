class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>set;
        for(auto& i:s){
            set.insert(i);
        }
        return set.size();
    }
};