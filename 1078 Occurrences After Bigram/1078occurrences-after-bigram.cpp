class Solution {
public:
    vector<string> findOcurrences(string t, string f, string se) {
        vector<string>s,ans;
        string v;
        for( char i : t){
            if( i!=' '){
                v+=i;
            }else{
                if(!v.empty())s.push_back(v);
                v.clear();
                
            }
        }

         if(!v.empty())s.push_back(v);
         if( s.size()<3)return {};
         for( int i=2;i<s.size();i++){
            if( s[i-2]==f && s[i-1]==se){
                    ans.push_back(s[i]);
            }
         }
         return ans;
    }
};