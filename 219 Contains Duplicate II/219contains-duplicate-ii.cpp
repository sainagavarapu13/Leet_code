class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& n, int k) {
        map< int , int > map;
        for( int i=0;i<n.size();i++){
            if( map.count(n[i])){
                if( abs(i-map[n[i]])<= k)return 1;

            }
            map[n[i]]=i;
        }
        return 0;
    }
};