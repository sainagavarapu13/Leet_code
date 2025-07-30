class Solution {
public:

    int ispre(char ch,string s){
        int i,cnt=0;
        for(i=0;i<s.size();i++){
            if(s[i]==ch) cnt++;

        }
        return cnt;
    }
   
    string customSortString(string o, string s) {
        int i;
        string ans;
        for(i=0;i<o.size();i++)
            {
                 int k=ispre(o[i],s);
                    while(k--){
                        ans.push_back(o[i]);
                    }
                
            }
           for (int i = 0; i < s.size(); i++) {
            if (o.find(s[i]) == string::npos) { // If character not in o
                ans.push_back(s[i]);
            }
        }

       
    
     return ans;
    }
};