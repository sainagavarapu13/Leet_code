class Solution {
public:
    string addSpaces(string s, vector<int>& b) {
        string a;
        int j=0;
        for( int i=0;i<s.size();i++){
                if( j<b.size() && i==b[j]){
                    a.push_back(' ');
                    a.push_back(s[i]);
                    j++;
                }else{
                    a.push_back(s[i]);
                }
        }
        return a;
    }
};