class Solution {
public:
vector<vector<string>>ans;
bool par( string s){
    if( s.size()==1) return 1;
    int i=0,j=s.size()-1;
    while( i< j ){
        if( s[i]!=s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
    void fun(int i , string s, vector<string>p){
        if(i==s.size()){
            ans.push_back(p);
            return;
        }
        for( int e=i ;e<s.size();e++){
            if( par(s.substr(i,e-i+1))){
                p.push_back(s.substr(i,e-i+1));
                fun( e+1,s,p);
                p.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>p;
        fun( 0,s,p);
        return ans;
    }
};