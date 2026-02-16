class Solution {
public:
    int minimumSwap(string a, string b) {
        int xy=0 ,yx=0;
        for( int i=0;i<a.size();i++){
            if( a[i]=='x'&& b[i]=='y')xy++;
            if( a[i]=='y'&& b[i]=='x') yx++;
        }
        if((xy+yx)%2==1) return -1;
        return ( xy)/2+(yx)/2+(xy%2)*2;
    }
};