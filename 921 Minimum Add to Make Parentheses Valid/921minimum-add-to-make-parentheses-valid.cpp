class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>a;
        int cnt=0;
        for( auto& i : s){
            if( i =='(') a.push(i);
            else if( i ==')' && !a.empty()) a.pop();
            else if( i ==')' && a.empty())cnt++;
        }
        cnt+=a.size();
        return cnt;
        
    }
};