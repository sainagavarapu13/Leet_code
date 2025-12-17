class Solution {
public:
    vector<string> stringSequence(string a) {
        string b;
        int i=0;
        vector<string>ans;
        while(b!=a){
            if(b.size()<a.size()){
                b.push_back('a');
            }
            ans.push_back(b);
            while(b[i]!=a[i]){
                b[i]++;
                ans.push_back(b);
            }
            i++;
            
        }
        return ans;
    }
};