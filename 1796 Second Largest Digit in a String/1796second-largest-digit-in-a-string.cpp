class Solution {
public:
    int secondHighest(string s) {
        set<char>set;
        for(auto& i:s){
            if(i>='0'&&i<='9'){
                set.insert(i);
            }
        }
        if(set.size()<=1) return -1;
        string ans;
        for(auto& i: set){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end(),greater<>());
        int k=ans[1]-'0';
        return k;
       
    }
};