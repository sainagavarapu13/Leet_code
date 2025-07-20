class Solution {
public:
    string convertToTitle(int x) {
        string s;
        while(x){
            x--;
            s = char((x%26)+'A')+s;
            x/=26;
        }
    return s;

    }
};