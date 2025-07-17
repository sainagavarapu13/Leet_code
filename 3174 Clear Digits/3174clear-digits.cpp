class Solution {
public:
    string clearDigits(string s) {
        stack<int>st;
        for( char c:s){
            if( isdigit(c)){ 
                if( !st.empty()){
                st.pop();}
                }
           else{ st.push(c);
           }
        }
    
    string r;
    
    while( !st.empty()){
        r += st.top();
        st.pop();
    }
    reverse(r.begin(),r.end());
    return r;
    }
};