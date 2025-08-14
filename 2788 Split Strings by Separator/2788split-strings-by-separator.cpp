class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& w,char s) {
        vector<string>a;
        for( auto & i : w){
            string k;
            for(auto& c :i){
                if( c!=s){
                    k+=c;
                }else if (!k.empty()){
                    a.push_back(k);
                    k.clear();
                }
            }
            if (!k.empty()){
                    a.push_back(k);
                    k.clear();
                }
        }
        return a;
    }
};