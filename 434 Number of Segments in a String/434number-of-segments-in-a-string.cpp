class Solution {
public:
    int countSegments(string s) {
        istringstream ss(s);
        int cnt=0;
        string w;
        while(ss >> w){
           cnt++;
        }
        return cnt;
    }
};