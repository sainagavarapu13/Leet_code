class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char t) {
        if( t < a[0]) return a[0];
        for( int i=1;i<a.size();i++){
            if( a[i]>t) return a[i];
        }
        return a[0];
        
    }
};