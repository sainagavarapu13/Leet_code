class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>a;
        int i=0 , j =s.size();
        for( auto& c: s){
            a.push_back((c=='I')? i++ : j--);
        }
        a.push_back(j);
        return a;
        
    }
};