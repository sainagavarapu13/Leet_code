class Solution {
public:
    char findKthBit(int n, int k) {
        int i = 1;
        string s = "0";
        while(i<n){
            string t = "";
            for(int i=s.length()-1;i>=0;i--){
                if(s[i]=='0') t +='1';
                else t+='0';
            }
            s +='1'+t;
            i++;
        }
        // cout<<s<<endl;
        return s[k-1];
    }
};