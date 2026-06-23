class Solution {
public:
vector<string>ans;
    void check(int n,string temp){
        if(temp.size()>=n){
            if(temp.size()==n)
            ans.push_back(temp);
            return;
        }
        for(auto& ch : {'a','b','c'}){
            if(!temp.empty()&&temp.back()==ch) continue;
            check(n,temp+ch);
        }
    }
    string getHappyString(int n, int k) {
        ans.clear();
        string temp;
        check(n,temp);
        if(k>ans.size()) return "";
        return ans[k-1];
    }
};