class Solution {
public:
    bool partitionArray(vector<int>& n, int k) {
        if( n.size()%k !=0) return 0;
        map <int , int >a;
        for( int i : n)a[i]++;
        for( auto& [b,c] : a){
            if( c > (n.size()/k)) return 0;
        }
        return 1;

    }
};