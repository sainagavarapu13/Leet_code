class Solution {
public:
    string largestWordCount(vector<string>& m, vector<string>& s) {
        map< string , int > a;
        for( int i=0;i<m.size();i++){
            int cnt=1;
            for( char c: m[i] ){
                    if(c==' ' ) cnt++;
            }
             a[s[i]]+=cnt;
        }
        int max=0;
        string res;
        for( auto& i : a){
            if( max < i.second ){
                 max = i.second;
                 res = i.first;
            }
            else if ( max == i.second){
                if( res < i.first) res = i.first;
            }
        }
       
        return res;
    }
};