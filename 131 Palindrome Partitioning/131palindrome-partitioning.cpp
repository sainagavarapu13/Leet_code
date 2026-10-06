class Solution {
public:
vector<vector<string>>ans;
vector<string>t1;
    bool ispalin(string &s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void fun(string &s,int idx,string temp){
         if(idx==s.size()){
            if(temp =="")ans.push_back(t1);
           
            return;
        }
        temp.push_back(s[idx]);
       // if(!ispalin(temp)) return ; 
        if(ispalin(temp)&&temp!=""){
            t1.push_back(temp);
           fun(s,idx+1,"");
           t1.pop_back();
            //   fun(s,idx+1,temp);
        }
       
       
       fun(s,idx+1,temp);
    //   & temp.pop_back();
       
    }
    vector<vector<string>> partition(string s) {
        ans.clear();
        string temp ="";
        fun(s,0,temp);
        return ans;
    }
};