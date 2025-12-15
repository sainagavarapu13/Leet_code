class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if( s=="")return 0;
        int m = 0;
        for( int i=0;i<s.size();i++){
            set<char>a;
            for( int j =i;j<s.size();j++){
                a.insert(s[j]);
                int n = a.size();
                 m = max( m , n);
                 if( a.size() < j-i+1){
                    break;
                 }

            }
        }
        return m;
        
    }
};