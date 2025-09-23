class Solution {
public:
    string decodeMessage(string a, string b) {
        string ans;
        for( int i=0;i<a.size();i++){
            if( a[i]!=' ' && (find(ans.begin(),ans.end(),a[i])==ans.end())){
                ans+=a[i];
            }
        }
        string res;
        for(char i : b){
            if( i==' ') res+=' ';
            else{int j=0;
            while(j<ans.size() ){
                if( i == ans[j]) break;
                j++;
            }
            res+='a'+j;}
            
        }
        return res;
    }

};