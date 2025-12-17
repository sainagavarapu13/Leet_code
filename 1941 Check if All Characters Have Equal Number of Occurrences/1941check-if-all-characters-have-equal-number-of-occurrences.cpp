class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char , int>mp;
        for( char r : s){
            mp[r]++;
        }
        bool f=true;
        int val =-1;
        for( auto& [x,y]:mp){
            if( val ==-1){
                val = y;
            }else if( val == y) continue;
            else if( val != y){
                f= false;
                break;

            }
        }
        return f;
        
    }
};