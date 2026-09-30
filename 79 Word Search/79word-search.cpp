class Solution {
public:
    bool fun(vector<vector<char>>& a, string word,int i,int j,string temp){
        if(temp==word) return true;
        if(i>=a.size()||j>=a[0].size()||i<0||j<0){
            return false;
        }
         if(a[i][j] == '#')
            return false;
                temp.push_back(a[i][j]);
        if(word[temp.size()-1]!=temp.back())
            return false;
            char ch=a[i][j];
         
            a[i][j]='#';
       
        bool ans=fun(a,word,i+1,j,temp)||
        fun(a,word,i-1,j,temp)||
        fun(a,word,i,j-1,temp)||
        fun(a,word,i,j+1,temp);
        a[i][j]=ch;
    return ans;
    }
    bool exist(vector<vector<char>>& a, string word) {
        string temp;
        for(int i=0;i<a.size();i++){

            for(int j=0;j<a[0].size();j++){

                if(fun(a,word,i,j,temp))
                    return true;
            }
        }

        return false;
    }
};