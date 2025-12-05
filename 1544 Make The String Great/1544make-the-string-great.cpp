class Solution {
public:
    string makeGood(string s) {
        stack<char>a;
        for( int i=0;i<s.size();i++){
            if( i==0){
                a.push(s[i]);
            }else{
              if( a.size()>0){ 
                 if( a.top() != s[i] ){
                    if( tolower(a.top())==tolower(s[i])){
                        a.pop();
                    }
                   else a.push(s[i]);
                }else a.push(s[i]);
                } else a.push(s[i]);
            }
           

        }
        string ans;
        while( a.size()){
            ans+=a.top();
            a.pop();
        }
      reverse( ans.begin(),ans.end());
      return ans;
        
    }
};