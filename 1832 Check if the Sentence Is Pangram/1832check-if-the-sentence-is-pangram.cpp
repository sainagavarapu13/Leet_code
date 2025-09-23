class Solution {
public:
    bool checkIfPangram(string a) {
       set<char>set(a.begin(),a.end());
       if(set.size()==26) return 1;
       else return 0;
    }
};