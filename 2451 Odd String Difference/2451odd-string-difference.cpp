class Solution {
public:
    string oddString(vector<string>& w) {
       map<vector<int>,pair<int,vector<string>>> m;
       for( auto i : w){
            vector<int> a;
            for( int j=1;j<i.size();j++){
                a.push_back(i[j]-i[j-1]);
            }
            m[a].first++;
            m[a].second.push_back(i);
       }
       for( auto [x,y] : m){
            if(y.first==1)
                return y.second[0];
       }
       return "";
    }
};