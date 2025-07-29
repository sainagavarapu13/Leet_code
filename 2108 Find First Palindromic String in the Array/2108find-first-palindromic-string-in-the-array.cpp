class Solution {
public:
    int ispalin(string s){
        string rev=s;
        reverse(rev.begin(),rev.end());
        if(s==rev) return 1;
        else return 0;
    }
    string firstPalindrome(vector<string>& a) {
        int i;
        for(i=0;i<a.size();i++){
            if(ispalin(a[i])){
                return a[i];
            }
        }
        return "";
    }
};