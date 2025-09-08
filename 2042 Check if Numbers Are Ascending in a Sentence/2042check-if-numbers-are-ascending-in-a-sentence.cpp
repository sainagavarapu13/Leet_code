class Solution {
public:
    bool areNumbersAscending(string s) {
        int last=-1;
        bool in = false;
        bool de = false;
        vector<string>a;
        string b;
        for( int i=0;i<s.size();i++){
            if( s[i] ==' '){
                a.push_back(b);
                b.clear();
            }else b+=s[i];

        }
        a.push_back(b);
        vector<int> res;
        for( auto& i : a){
            bool isNumber = true;
            for(char c : i) {
                if(!isdigit(c)) {
                    isNumber = false;
                    break;
                }
            }if(isNumber){
            long long l =0;
            for(int j =0;j<i.size();j++) l= l*10+(i[j]-'0');
            if( l >=0 && l<= 100 ){
                    res.push_back(l);
                 }}
                
            
        }
        for( int i=1;i<res.size();i++){
           if( res[i-1] > res[i] || res[i-1]== res[i]) return 0;
        }
        return 1;
    }
};