class Solution {
public:
    bool isLongPressedName(string n, string t) {
        int i=0,j=0;
        while(j<t.length()){
            if(i<n.length() && n[i]==t[j]){
                i++;
                j++;
            }
            else if(i>0 && n[i-1]==t[j]){
                j++;
            }
            else{
                return false;
            }
        }
        if(j!=t.length() || i!=n.length()) return false;
        return true;
    }
};