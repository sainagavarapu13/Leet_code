class Solution {
public:
    vector<string> cellsInRange(string s) {
        char a = s[0],b=s[1],c=s[3],d=s[4];
        vector<string> v;
        string r;
        for(char i=a;i<=c;i++){
            r =i;
            for(int j = b-'0';j<=(d-'0');j++){
                v.push_back((r+to_string(j)));
            }
        }
        return v;
    }
};