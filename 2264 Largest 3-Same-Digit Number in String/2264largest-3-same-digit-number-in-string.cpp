class Solution {
public:
    int conver(string s){
        int num =0;
        for( char c : s){
            num= num*10+(c-'0');
        }
        return num;
    }
    string largestGoodInteger(string n) {
        if( n.size()==3 && n[0]==n[1] && n[0]==n[2]) return n; 
        int max =-1;
        string res;
        for( int i=1;i<n.size()-1;i++){
            if( n[i]==n[i+1] && n[i]==n[i-1]){
                if(n[i]-'0'>max){
                    max=n[i]-'0';
                }
            }
        }
        if( max ==-1) return "";
        res.push_back(max+'0');
        res.push_back(max+'0');
        res.push_back(max+'0');
        return res;
       
    }
};