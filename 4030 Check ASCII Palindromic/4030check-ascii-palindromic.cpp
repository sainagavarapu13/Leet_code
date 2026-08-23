class Solution {
public:
    bool isPalindromic(string s) {
        string bi = "";
        for(char i : s){
            bi+=bitset<8>(i).to_string();
        }
        int l =0, r= bi.size()-1;
        while(l<r){
            if( bi[l]!=bi[r]) return 0;
            r--;
            l++;
        }
        return 1;
    }
};