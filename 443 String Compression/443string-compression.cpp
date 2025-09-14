class Solution {
public:
    int compress(vector<char>& c) {
       int w= 0,r=0;
       while(r<c.size()){
        char cu = c[r];
        int cnt = 0;
        while(r<c.size() && c[r]==cu){
            r++;
            cnt++;
        }
        c[w++] = cu;
        if(cnt>1){
            string v = to_string(cnt);
            for(char ca:v){
                c[w++] = ca;
            }
        }
       }
       return w;
    }
};