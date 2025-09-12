class Solution {
public:
    bool doesAliceWin(string s) {
        unordered_set<int>vowel = {'a' , 'e' ,'i','o','u'};
        vector<pair<char , int>>a;
        int cnt=0;
        for( auto& i:s){
            if( vowel.count(i)){
                a.push_back({i,cnt});
            }
            cnt++;
        }

        if( (a.size())>0) return 1;
        else if( a.size() ==0) return 0;
        return 0;
    }
};