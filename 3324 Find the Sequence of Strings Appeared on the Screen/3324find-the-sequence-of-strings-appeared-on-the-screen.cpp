class Solution {
public:
    vector<string> stringSequence(string s) {
        vector<string>ans;
        string a;
        for (char c : s) {
            a.push_back('a');
            ans.push_back(a);
            while (a.back()!=c) {
                a.back()= (a.back()-'a'+1)%26+'a';
                ans.push_back(a);
            }
        }
        return ans;
    }
};
