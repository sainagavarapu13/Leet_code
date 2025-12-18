class Solution {
public:
    int minLengthAfterRemovals(string a) {
        stack<char>s;
        for( auto& i : a){
            if( !s.empty()){
                if(s.top()!=i){
                    s.pop();
                }else s.push(i);
            }else s.push(i);
        }
        string res;
        return s.size();
        
    }
};