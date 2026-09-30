class Solution {
public:
vector<string>ans;
    void fun(int n,string s, int open , int clo){
        if((int)s.size() == 2*n){
            ans.push_back(s);
            return ;
        }
    if(open < n){
    fun(n ,s+'(' ,open+1,clo);
   // if(!s.empty()) s.pop_back();
     }
        if(clo < open){
            fun(n,s+')',open,clo+1);
          // if(!s.empty())  s.pop_back();
        }
       
    }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        string s="";
        fun(n,s,0,0);
        return ans;
    }
};