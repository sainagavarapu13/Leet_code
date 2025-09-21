class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int>a;
        for( auto& i:deck){
            a[i]++;
        }
        int gcd_f = a[deck[0]];
        for( auto&[x,y]:a){
            gcd_f = gcd(gcd_f , y);
            if( gcd_f ==1) return 0;
        }
        return 1;
    }
};