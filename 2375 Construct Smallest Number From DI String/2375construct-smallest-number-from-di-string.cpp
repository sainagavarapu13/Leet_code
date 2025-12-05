class Solution {
public:
    string smallestNumber(string s) {
        vector<pair<char , int>>a;
        int cnt=1;
        int i=1;
        for(  i=1;i<s.size();i++){
            if( s[i]!=s[i-1]){
                a.push_back({s[i-1],cnt});
                cnt=1;
            }else{
                cnt++;
            }
        }
        a.push_back({s[i-1],cnt});
        int len = s.size();
        len++;
        string b;
        int k=1;
        while( len--){
            b+=(k+'0');
            k++;
        }
        int ind=1;
        for( auto [x,y]: a){
            if( x=='I') ind+=y;
            else{
                reverse( b.begin()+ind-1,b.begin()+ind+y);
                ind+=y;
            }
        }
        return b;
    }
};