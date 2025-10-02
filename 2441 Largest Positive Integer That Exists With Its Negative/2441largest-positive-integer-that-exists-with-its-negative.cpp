class Solution {
public:
    int findMaxK(vector<int>& a) {
        set<int >b;
        vector<int>c;
        for( int i:a){
            if( i<0){
                b.insert(abs(i));
            }else{
                c.push_back(i);
            }
        }
        int ma = -1;
        for( int i: c){
            if( b.count(i)){
                ma = max( i , ma);
            }
        }
        return ma;
        
    }
};