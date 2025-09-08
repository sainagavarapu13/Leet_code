class Solution {
public:
    string sortSentence(string s) {
        int cnt=1;
        vector<string>b;
        string k;
        for( int i=0;i<s.size();i++){
                if( s[i]==' '){ 
                    cnt++;
                    b.push_back(k);
                    k.erase();
                    }else k+=s[i];
        }b.push_back(k);
        vector<string>a(cnt);
        for(auto& r : b){
            int ind = r.back()-'0'-1;
            a[ind] = r.substr(0,r.size()-1);
        }
        string res;
        for( int i=0;i<a.size();i++){
            res+=a[i];
            if( i!=a.size()-1) res+=' ';
            
        }
        return res;
            }
};