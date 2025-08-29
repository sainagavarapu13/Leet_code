class Solution {
public:
    int compress(vector<char>& s) {
        string b;
        int cnt=1,i;
        for(  i = 1; i < s.size(); i++)
        {
            if( s[i] == s[i-1]){
                cnt++;
            }else{
                b+=s[i-1];
                    if(cnt !=1){
                        b+=to_string(cnt);
                    }
                    cnt=1;
            }

        }
        b+=s[i-1];
        if(cnt !=1){
            b+=to_string(cnt);
        }
        s.clear();
        for(int i=0;i<b.size();i++){
            s.push_back(b[i]);
        }
        return b.size();
        
    }
};