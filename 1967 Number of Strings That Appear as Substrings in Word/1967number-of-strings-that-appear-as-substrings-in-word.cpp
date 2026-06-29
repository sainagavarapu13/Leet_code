class Solution {
public:
    int numOfStrings(vector<string>& a, string s) {
        set<string>set;
        for(int i=0;i<s.size();i++){
            string temp;
            for(int j=i;j<s.size();j++){
                 temp.push_back(s[j]);
                 set.insert(temp);
                
            }
        }
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(set.count(a[i])) cnt++;
        }
        return cnt;
    }
};