class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> a;
        int n = s.length(),j=0;
        for(int i=0;i<n;i++){
            string temp = "";
            for(j=0;j<k;j++){
                if((i+j)<n){
                    temp += s[j+i];
                }
                else{
                    temp +=fill;
                }
            }
            i = i+j-1;
            a.push_back(temp);
        }
        return a;
    }
};