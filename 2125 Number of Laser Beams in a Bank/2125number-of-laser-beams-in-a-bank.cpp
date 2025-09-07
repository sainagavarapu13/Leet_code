class Solution {
public:
    int numberOfBeams(vector<string>& s) {
        vector<int>a;
        int total=0;
        for( auto& r : s){
            int cnt=0;
            for( auto& i : r){
                    if( i=='1') cnt++;
            }
             if( !a.empty()) total+=(a.back()*cnt);
            if( cnt !=0)a.push_back(cnt);
           
        }
        
        return total;
    }
};