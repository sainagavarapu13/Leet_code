class Solution {
public:
    string findLexSmallestString(string s, int x, int b) {
        queue<string>q;
        string ans = s;
        set<string>v;
        v.insert(s);
        q.push(s);
        while(!q.empty()){
           string c= q.front();
           q.pop();
           ans = min(ans, c);
           string a = c;
           for( int i=1;i<a.size();i+=2){
            a[i]= ((a[i]-'0'+x)%10+'0');
           }
           if( !v.count(a)){
                v.insert(a);
                q.push(a);
           }
         //  int k = c.siz
           string rev = c.substr((int)c.size()-b) + c.substr(0,(int)c.size()-b);
            if( !v.count(rev)){
                v.insert(rev);
                q.push(rev);
           }
        }
        return ans;
    }
};