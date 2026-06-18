class Solution {
public:
vector<string>a;
    void check( string t , int n){
        if( t.size() == n){
            a.push_back( t);
            return ;
        }
        if( t !=""){
            if( t.back()!='0'){
                check( t+'1', n);
                check( t+'0',n);
            }else check( t+'1', n);
        }else{
            check(t+'1', n);
            check( t+'0',n);
            
        }
    }
    vector<string> validStrings(int n) {
        check("", n);
       return a;

    }
};