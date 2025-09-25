class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>a;
        int ele = k-s.size()%k;
        if( ele% k !=0){
        while(ele--){
            s+=fill;
        }}
        for( int i=0;i<s.size();i+=k){
            
            string c = s.substr(i , k);
            a.push_back(c);
            c.erase();
            }
        
        return a;
    }
};