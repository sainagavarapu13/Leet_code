class Solution {
public:
int flag=0;
    bool fun(vector<__int128>&temp){
        vector<__int128>t = temp;
       
        if(temp.size()<2) return false;
        for(int i=1;i<temp.size();i++){
            if(temp[i-1]-temp[i]!=1){
                return false;
            }
        }
        return true;
    }
    void check(string &s, vector<__int128>&temp ,int idx,__int128 num){
        if(flag) return;
        if(idx==s.size()){
            temp.push_back(num);
            if(fun(temp)){
                flag=1;
            }
            temp.pop_back();
            return;
        }
       
      if (num > (LLONG_MAX - (s[idx]-'0')) / 10)
    return;

        num=num*10+(s[idx]-'0');
        if(idx != s.size()-1){
        temp.push_back(num);
        if(temp.size()==1 || temp[temp.size()-2]-temp.back()==1)
        check(s,temp,idx+1,0);
        temp.pop_back();
        }
        check(s,temp,idx+1,num);
    }
    bool splitString(string s) {
        flag=0;
        vector<__int128>temp;
        check(s,temp,0,0*1LL);
        return flag;
    }
};