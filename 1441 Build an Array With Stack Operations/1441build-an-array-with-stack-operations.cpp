class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        string s = "Push",t="Pop";
        vector<string> res;
        int a = 1,i=0;
        while(a<=n && i<target.size() ){
            if(target[i]==a){
                res.push_back(s);
                i++;
                a++;
            }
            else{
                res.push_back(s);
                res.push_back(t);
                a++;
            }
        }
        return res;
    }
};