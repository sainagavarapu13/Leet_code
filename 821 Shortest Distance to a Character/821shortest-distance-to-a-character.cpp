class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>a(s.size(),-1);
        vector<int>q;
       for( int i=0;i<s.size();i++){
            if(s[i]==c){
                a[i]=0;
                q.push_back(i);
            }
       }
        for( int i=0;i<a.size();i++){
            int mi = INT_MAX;
            for( int j=0;j<q.size();j++){
                mi = min( mi , abs(q[j]-i));
            }
            a[i]= mi;
        }
        return a;
    }
};