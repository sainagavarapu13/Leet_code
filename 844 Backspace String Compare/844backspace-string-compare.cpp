class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string temp;
        for(auto& i:s){
            if(i=='#'&&temp.empty()){
              continue;
            }
            if(i=='#'){
                temp.pop_back();
            }
            else temp.push_back(i);
        }
        s.clear();
        s=temp;
        temp.clear();

        for(auto& i:t){
            if(i=='#'&&temp.empty()){
                continue;
            }
            if(i=='#'){
                temp.pop_back();
            }
            else temp.push_back(i);
        }
        if(temp==s) return 1;
        else return 0;
    }
};