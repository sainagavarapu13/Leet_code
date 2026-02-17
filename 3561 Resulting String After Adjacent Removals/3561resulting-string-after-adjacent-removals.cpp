class Solution {
public:
    string resultingString(string s) {
        string temp;
        for(int i=0;i<s.size();i++){
            char pre = s[i];
            if(!temp.empty()&&((abs((int)(temp.back()-pre)) )==1||(abs((int)(temp.back()-pre)) )==25)){
                temp.pop_back();
            }
            else{
                temp.push_back(s[i]);
            }
        }
        return temp;
    }
};