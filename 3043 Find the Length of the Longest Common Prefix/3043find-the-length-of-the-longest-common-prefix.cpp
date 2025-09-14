class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> p;
        int m=0;
        for(int n:arr1){
            string s = to_string(n);
            string pr = "";
            for(char ch : s){
                pr +=ch;
                p.insert(pr);
            }
        }
        for(int n:arr2){
            string s = to_string(n);
            string pr = "";
            for(char ch : s){
                pr +=ch;
                if(p.count(pr)){
                    m = max(m,(int)pr.size());
                }
                else{
                    break;
                }
            }
        }
        return m;
    }
};