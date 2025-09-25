class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int si,e;
        bool f=false;
        si=0;
        int cnt=1,i;
        vector<vector<int>>a;
        for(  i=1;i<s.size();i++ ){
                if( s[i]!=s[i-1]){
                    if( cnt >=3){
                        vector<int>c;
                        c.push_back(si);
                        c.push_back(i-1);
                        a.push_back(c);
                    }
                    si=i;
                    cnt =0;
                }
                cnt++;
        }
         if( cnt >=3){
                        vector<int>c;
                        c.push_back(si);
                        c.push_back(i-1);
                        a.push_back(c);
                    }
                    
        return a;
        
    }
};