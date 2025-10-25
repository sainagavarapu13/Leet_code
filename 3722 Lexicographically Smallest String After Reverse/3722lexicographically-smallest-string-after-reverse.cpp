class Solution {
public:
    string lexSmallest(string s) {
        string res=s;
        int n=s.size();
        for(int i=0;i<=s.size();i++){
            string t1=s;
            reverse(t1.begin(),t1.begin()+i);
            res=min(res,t1);
            string t2=s;
            reverse(t2.end()-i,t2.end());
            res=min(res,t2);
        }
        return res;
    }
};